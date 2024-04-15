#include <functional>
#include <memory>
#include <thread>
#include <string>

#include <moveit/move_group_interface/move_group_interface_improved.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "ur3e_ros_data/action/move_xyzw.hpp"
#include "ur3e_ros_data/msg/joint_pose.hpp"

// Declare global variable
const double pi = 3.14159265358979;
const double k = pi/180.0;

// Global - Declare MoveIt2 interface -> move_group_interface
moveit::planning_interface::MoveGroupInterface move_group_interface;

// Create a class called MoveXYZW_ActionServer that derives from rclcpp:Node (takes on attributes)
class MoveXYZW_ActionServer : public rclcpp::Node
{
    public:
        // Create a type alias of  MoveXYZW action and ServerGoalHandle of type MoveXYZW
        using MoveXYZW = ur3e_ros_data::action::MoveXYZW;
        using GoalHandleMoveXYZW = rclcpp_action::ServerGoalHandle<MoveXYZW>;
        // Initilise node name as "movexyzw_action_server"
        //UR3E_ROS_ACTION_CPP_PUBLIC
        explicit MoveXYZW_ActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
        : Node("movexyzw_action_server", options)
        {
            /*
            Instantiate new action server with following:
            1- Templated action type name 'MoveXYZW'
            2- A ROS2 node to add the action to 'this'
            3- The action name 'movexyzw'
            4- A callback function for handling goals 'handle_goal'
            5- A callback function for handling cancellation 'handle_cancel'
            6- A callback function for handling goal accept 'handle_accepted'
            */
            action_server_ = rclcpp_action::create_server<MoveXYZW>(
                this,
                "movexyzw",
                std::bind(&MoveXYZW_ActionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),              
                std::bind(&MoveXYZW_ActionServer::handle_cancel, this, std::placeholders::_1),
                std::bind(&MoveXYZW_ActionServer::handle_accepted, this, std::placeholders::_1));
        }

    private:
        rclcpp_action::Server<MoveXYZW>::SharedPtr action_server_;

        rclcpp_action::GoalResponse handle_goal(
            const rclcpp_action::GoalUUID & uuid,
            std::shared_ptr<const MoveXYZW::Goal> goal)
        {
            double posX = goal->posx;
            double posY = goal->posy;
            double posZ = goal->posz;
            double yaw = goal->yaw;
            double pitch = goal->pitch;
            double roll = goal->roll;

            RCLCPP_INFO(get_logger(), "Received Move_XYZW Request");
            RCLCPP_INFO(this->get_logger(), "Pos || X: %.2f, Y: %.2f, Z: %.2f", posX, posY, posZ);
            RCLCPP_INFO(this->get_logger(), "Ori (Euler) || Yaw: %.2f, Pitch: %.2f, Roll: %.2f", yaw, pitch, roll);

            return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
        }

        rclcpp_action::CancelResponse handle_cancel(
            const std::shared_ptr<GoalHandleMoveXYZW> goal_handle)
        {
            RCLCPP_INFO(this->get_logger(), "Request to cancel goal");
            move_group_interface.stop();
            (void)goal_handle;
            return rclcpp_action::CancelResponse::ACCEPT;
        }

        void handle_accepted(const std::shared_ptr<GoalHandleMoveXYZW> goal_handle)
        {
            using namespace std::placeholders;
            std::thread{std::bind(&MoveXYZW_ActionServer::execute, this, _1), goal_handle}.detach();
        }

        void execute(const std::shared_ptr<GoalHandleMoveXYZW> goal_handle)
        {
            using namespace std;

            RCLCPP_INFO(this->get_logger(), "Starting MoveXYZW To Specified Waypoint...");
            
            // Get input goal
            const auto goal = goal_handle->get_goal();

            double posX = goal->posx;
            double posY = goal->posy;
            double posZ = goal->posz;
            double yaw = goal->yaw;
            double pitch = goal->pitch;
            double roll = goal->roll;

            auto SPEED = goal->speed;

            // Set max vel and accel SF
            move_group_interface.setMaxVelocityScalingFactor(SPEED);
            move_group_interface.setMaxAccelerationScalingFactor(1.0);

            // Declare result
            auto result = std::make_shared<MoveXYZW::Result>();

            // Create joint model group
            const moveit::core::JointModelGroup* joint_model_group = move_group_interface.getCurrentState()->getJointModelGroup("ur3e_arm");

            // Get robot current pose
            auto current_pose = move_group_interface.getCurrentPose();
            RCLCPP_INFO(this->get_logger(), "Current Pose: ");
            RCLCPP_INFO(this->get_logger(), "Pos || X: %.2f, Y: %.2f, Z: %.2f", current_pose.pose.position.x, current_pose.pose.position.y, current_pose.pose.position.z);
            RCLCPP_INFO(this->get_logger(), "Ori (Quaternion) || X: %.2f, Y: %.2f, Z: %.2f", current_pose.pose.orientation.x, current_pose.pose.orientation.y, current_pose.pose.orientation.z);
            
            // Need to convert from euler to quaternion to get input orientation readable
            double cosy = cos(k * yaw * 0.5);
            double siny = sin(k * yaw * 0.5);
            double cosp = cos(k * pitch * 0.5);
            double sinp = sin(k * pitch * 0.5);
            double cosr = cos(k * roll * 0.5);
            double sinr = sin(k * roll * 0.5);

            double ori_x = (sinr * cosp * cosy) - (cosr * sinp * siny);
            double ori_y = (cosr * sinp * cosy) + (sinr * cosp * siny);
            double ori_z = (cosr * cosp * siny) - (sinr * sinp * cosy);
            double ori_w = (cosr * cosp * cosy) + (sinr * sinp * siny);

            // Plan goal pose
            geometry_msgs::msg::Pose target_pose;
            target_pose.position.x = posX;
            target_pose.position.y = posY;
            target_pose.position.z = posZ;
            target_pose.orientation.x = ori_x;
            target_pose.orientation.y = ori_y;
            target_pose.orientation.z = ori_z;
            target_pose.orientation.w = ori_w;

            move_group_interface.setPoseTarget(target_pose);

            // Plan, execute and inform
            moveit::planning_interface::MoveGroupInterface::Plan new_plan;

            bool success = (move_group_interface.plan(new_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);

            if(success) {

                RCLCPP_INFO(this->get_logger(), "Planning for MoveXYZW Action SUCCESSFUL!");
                move_group_interface.move();

                // If goal is cancelled
                if (goal_handle->is_canceling()) {
                    RCLCPP_INFO(this->get_logger(), "MoveXYZW Action Goal Cancelled");
                    result->result = "MoveXYZW:CANCELLED";
                    goal_handle->canceled(result);
                    return;
                } else {
                    RCLCPP_INFO(this->get_logger(), "Movement for MoveXYZW Action EXECUTED!");
                    result->result = "MoveXYZW:SUCCESS";
                    goal_handle->succeed(result);
                }

            } else {
                RCLCPP_INFO(this->get_logger(), "Planning for MoveXYZW Action FAILED");
                result->result = "MoveXYZW:FAILED";
                goal_handle->succeed(result);
            }

            
            

            // //Check if goal is complete
            // if (rclcpp::ok())
            // {
            //     goal_handle->succeed(result);
            //     RCLCPP_INFO(this->get_logger(), "Goal succeeded");
            // }
        }
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    
    // Create and spin MoveIt!2 interface node
    auto m_node_name = "UR3e_MoveXYZW_Interface";
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
    auto movexyzw_action_server = std::make_shared<MoveXYZW_ActionServer>();
    rclcpp::spin(movexyzw_action_server);

    rclcpp::shutdown();

    return 0;
}