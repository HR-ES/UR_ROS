#include <functional>
#include <memory>
#include <thread>
#include <string>

#include <moveit/move_group_interface/move_group_interface_improved.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "ur3e_ros_data/action/move_l.hpp"

// Declare global variable
const double pi = 3.14159265358979;
const double k = pi/180.0;

// Global - Declare MoveIt2 interface -> move_group_interface
moveit::planning_interface::MoveGroupInterface move_group_interface;

// Create a class called MoveJ_ActionServer that derives from rclcpp:Node (takes on attributes)
class MoveL_ActionServer : public rclcpp::Node
{
    public:
        // Create a type alias of  MoveJ action and ServerGoalHandle of type MoveJ
        using MoveL = ur3e_ros_data::action::MoveL;
        using GoalHandleMoveL = rclcpp_action::ServerGoalHandle<MoveL>;
        // Initilise node name as "movel_action_server"
        //UR3E_ROS_ACTION_CPP_PUBLIC
        explicit MoveL_ActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
        : Node("movel_action_server", options)
        {
            /*
            Instantiate new action server with following:
            1- Templated action type name 'MoveJ'
            2- A ROS2 node to add the action to 'this'
            3- The action name 'movel'
            4- A callback function for handling goals 'handle_goal'
            5- A callback function for handling cancellation 'handle_cancel'
            6- A callback function for handling goal accept 'handle_accepted'
            */
            action_server_ = rclcpp_action::create_server<MoveL>(
                this,
                "movel",
                std::bind(&MoveL_ActionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),              
                std::bind(&MoveL_ActionServer::handle_cancel, this, std::placeholders::_1),
                std::bind(&MoveL_ActionServer::handle_accepted, this, std::placeholders::_1));
        }

    private:
        rclcpp_action::Server<MoveL>::SharedPtr action_server_;

        rclcpp_action::GoalResponse handle_goal(
            const rclcpp_action::GoalUUID & uuid,
            std::shared_ptr<const MoveL::Goal> goal)
        {
            double moveX = goal->movex;
            double moveY = goal->movey;
            double moveZ = goal->movez;

            RCLCPP_INFO(get_logger(), "Received Linear Goal Request, vector=(x: %.2f, y: %.2f, z: %.2f)", moveX, moveY, moveZ);

            return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
        }

        rclcpp_action::CancelResponse handle_cancel(
            const std::shared_ptr<GoalHandleMoveL> goal_handle)
        {
            RCLCPP_INFO(this->get_logger(), "Request to cancel goal");
            move_group_interface.stop();
            (void)goal_handle;
            return rclcpp_action::CancelResponse::ACCEPT;
        }

        void handle_accepted(const std::shared_ptr<GoalHandleMoveL> goal_handle)
        {
            using namespace std::placeholders;
            std::thread([this, goal_handle]() {execute(goal_handle);}).detach();
        }

        void execute(const std::shared_ptr<GoalHandleMoveL> goal_handle)
        {
            //using namespace std;

            RCLCPP_INFO(this->get_logger(), "Starting MoveL To Specified Waypoint...");

            // Declare goal and access joint goal and speed
            RCLCPP_INFO(this->get_logger(), "Storing goal variables...");
            const auto goal = goal_handle->get_goal();
            
            double moveX = goal->movex;
            double moveY = goal->movey;
            double moveZ = goal->movez;

            auto SPEED = goal->speed;

            RCLCPP_INFO(this->get_logger(), "Applying Speed Scaling to MoveIt!2 Interface...");
            // Apply requested speed to moveit speed scaling factor
            move_group_interface.setMaxVelocityScalingFactor(SPEED);
            RCLCPP_INFO(this->get_logger(), "Applying Accel Scaling to MoveIt!2 Interface...");
            move_group_interface.setMaxAccelerationScalingFactor(1.0);
            //No feedback required

            RCLCPP_INFO(this->get_logger(), "Declaring Result Variable....");
            // Declare result
            auto result = std::make_shared<MoveL::Result>();

            const moveit::core::JointModelGroup* joint_model_group = move_group_interface.getCurrentState()->getJointModelGroup("ur3e_arm");

            // Get current pose
            auto current_pose = move_group_interface.getCurrentPose();

            // Init linear traj waypoints vector
            std::vector<geometry_msgs::msg::Pose> waypoints;

            // Define the goal pose with xyz
            geometry_msgs::msg::Pose target_pose = current_pose.pose;
            target_pose.position.x = target_pose.position.x + moveX;
            target_pose.position.y = target_pose.position.y + moveY;
            target_pose.position.z = target_pose.position.z + moveZ;

            // Check if goal pose is within robot workspace

            // With cartesian paths, moveit wont check the viability of the path thrugh the whole move.
            // If it can't complete the move, it will complete as much as possible and return the % of the path it completed.
            // Need to check tha tthe entire path can be completed before execution.
            // Can use IK to solve for the specific pose, but this is slow and tricky.
            // Another way is to plan a goal pose with standard moveit planner as if it is doing a "MoveXYZW" motion. 

            move_group_interface.setPoseTarget(target_pose);

            // Plan execute and inform
            moveit::planning_interface::MoveGroupInterface::Plan new_plan;
            bool success_1 = (move_group_interface.plan(new_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);

            if (success_1)
            {
                // Execute path

                // Add FINAL POINT to waypoints vector:
            waypoints.push_back(target_pose);

            // Generate TRAJECTORY (LINEAR):
            moveit_msgs::msg::RobotTrajectory trajectory;
            const double jump_threshold = 0.0;
            const double eef_step = 0.001;
            double fraction = move_group_interface.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
            
            bool success2 = (move_group_interface.execute(trajectory) == moveit::planning_interface::MoveItErrorCode::SUCCESS);


                // If cancelled
                if (goal_handle->is_canceling()) {
                    RCLCPP_INFO(this->get_logger(), "Goal Canncelled");
                    result->result = "MoveL:CANCELLED";
                    goal_handle-> canceled(result);
                    return;
                } else {
                    if(success2)
                    {
                        move_group_interface.move();
                        RCLCPP_INFO(this->get_logger(), "MoveL Execution SUCCESSFUL!");
                        result->result = "MoveL:SUCCESS";
                        goal_handle->succeed(result);
                    } else {
                        RCLCPP_INFO(this->get_logger(), "MoveL Execution FAILED");
                        result->result = "MoveL:EXECUTION_FAILED";
                        goal_handle->succeed(result);
                    }
                }
            } else {
                RCLCPP_INFO(this->get_logger(), "MoveL Planning Failed");
                result->result = "MoveL:PLANNING_FAILED";
                goal_handle->succeed(result);
            }
        }
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    
    // Create and spin MoveIt!2 interface node
    auto m_node_name = "UR3e_MoveL_Interface";
    auto const mi2_node = std::make_shared<rclcpp::Node>(
        m_node_name, rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true));
    rclcpp::executors::SingleThreadedExecutor executor;
    executor.add_node(mi2_node);
    std::thread([&executor]() {executor.spin();}).detach();

    // Create the MoveIt!2 group interface
    using moveit::planning_interface::MoveGroupInterface;
    static const std::string UR3E = "ur3e_arm";
    move_group_interface = MoveGroupInterface(mi2_node, UR3E);

    // Create MoveIt!2 planning scene interface
    using moveit::planning_interface::PlanningSceneInterface;
    auto planning_scene_interface = PlanningSceneInterface();

    // Create and spin the action server node
    auto movel_action_server = std::make_shared<MoveL_ActionServer>();
    rclcpp::spin(movel_action_server);

    rclcpp::shutdown();

    return 0;
}