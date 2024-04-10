#include <functional>
#include <memory>
#include <thread>
#include <string>

#include <moveit/move_group_interface/move_group_interface_improved.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "ur3e_ros_data/action/move_j.hpp"
#include "ur3e_ros_data/msg/joint_pose.hpp"

// Global - Declare MoveIt2 interface -> move_group_interface
moveit::planning_interface::MoveGroupInterface move_group_interface;

// Create a class called MoveJ_ActionServer that derives from rclcpp:Node (takes on attributes)
class MoveJ_ActionServer : public rclcpp::Node
{
    public:
        // Create a type alias of  MoveJ action and ServerGoalHandle of type MoveJ
        using MoveJ = ur3e_ros_data::action::MoveJ;
        using GoalHandleMoveJ = rclcpp_action::ServerGoalHandle<MoveJ>;
        // Initilise node name as "movej_action_server"
        //UR3E_ROS_ACTION_CPP_PUBLIC
        explicit MoveJ_ActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
        : Node("movej_action_server", options)
        {
            /*
            Instantiate new action server with following:
            1- Templated action type name 'MoveJ'
            2- A ROS2 node to add the action to 'this'
            3- The action name 'movej'
            4- A callback function for handling goals 'handle_goal'
            5- A callback function for handling cancellation 'handle_cancel'
            6- A callback function for handling goal accept 'handle_accepted'
            */
            action_server_ = rclcpp_action::create_server<MoveJ>(
                this,
                "movej",
                std::bind(&MoveJ_ActionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),              
                std::bind(&MoveJ_ActionServer::handle_cancel, this, std::placeholders::_1),
                std::bind(&MoveJ_ActionServer::handle_accepted, this, std::placeholders::_1));
        }

    private:
        rclcpp_action::Server<MoveJ>::SharedPtr action_server_;

        rclcpp_action::GoalResponse handle_goal(
            const rclcpp_action::GoalUUID & uuid,
            std::shared_ptr<const MoveJ::Goal> goal)
        {
            auto JointGoal = ur3e_ros_data::msg::JointPose();
            JointGoal = goal->goal;
            RCLCPP_INFO(this->get_logger(), "Received goal request. Requested Pose || (%.2f, %.2f, %.2f, %.2f, %.2f, %.2f)", JointGoal.joint1, JointGoal.joint2, JointGoal.joint3, JointGoal.joint4, JointGoal.joint5, JointGoal.joint6);
            (void)uuid;
            return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
        }

        rclcpp_action::CancelResponse handle_cancel(
            const std::shared_ptr<GoalHandleMoveJ> goal_handle)
        {
            RCLCPP_INFO(this->get_logger(), "Request to cancel goal");
            (void)goal_handle;
            return rclcpp_action::CancelResponse::ACCEPT;
        }

        void handle_accepted(const std::shared_ptr<GoalHandleMoveJ> goal_handle)
        {
            using namespace std::placeholders;
            std::thread{std::bind(&MoveJ_ActionServer::execute, this, _1), goal_handle}.detach();
        }

        void execute(const std::shared_ptr<GoalHandleMoveJ> goal_handle)
        {
            using namespace std;

            RCLCPP_INFO(this->get_logger(), "Starting MoveJ To Specified Waypoint...");
            rclcpp::Rate loop_rate(0.5);

            // Declare goal and access joint goal and speed
            RCLCPP_INFO(this->get_logger(), "Storing goal variables...");
            const auto goal = goal_handle->get_goal();
            auto JointGoal = goal->goal;
            auto SPEED = goal->speed;

            RCLCPP_INFO(this->get_logger(), "Applying Speed Scaling to MoveIt!2 Interface...");
            // Apply requested speed to moveit speed scaling factor
            move_group_interface.setMaxVelocityScalingFactor(SPEED);
            RCLCPP_INFO(this->get_logger(), "Applying Accel Scaling to MoveIt!2 Interface...");
            move_group_interface.setMaxAccelerationScalingFactor(1.0);
            //No feedback required

            RCLCPP_INFO(this->get_logger(), "Declaring Result Variable....");
            // Declare result
            auto result = std::make_shared<MoveJ::Result>();

            // ---JOINT GOAL LIMITS CHECKING--- //
            RCLCPP_INFO(this->get_logger(), "Setting variables for joint limits checking...");
            // Joint goal variables
            double j1 = JointGoal.joint1;
            double j2 = JointGoal.joint2;
            double j3 = JointGoal.joint3;
            double j4 = JointGoal.joint4;
            double j5 = JointGoal.joint5;
            double j6 = JointGoal.joint6;

            // Joint limit variables
            double j1_upper = 360;
            double j1_lower = -360;
            double j2_upper = 360;
            double j2_lower = -360;
            double j3_upper = 180;
            double j3_lower = -180;
            double j4_upper = 360;
            double j4_lower = -360;
            double j5_upper = 360;
            double j5_lower = -360;
            double j6_upper = 360;
            double j6_lower = -360;

            // Flag for limit error throwing
            bool _limitError = false;
            // String for joint error tracing
            string _whichJoint = "NA";
            // Double for error value traving
            double _whichValue = 0.0;

            // Check joint goal requests against each joint upper and lower limits
            RCLCPP_INFO(this->get_logger(), "Starting Joint Limit Checks...");
            if (j1 >= j1_lower && j1 <= j1_upper && _limitError == false)
            {   
                // Limits are within bounds so just pass
            } else {
                _limitError = true; // Throw Limits Error
                _whichJoint = "Joint 1";
                _whichValue = j1;
            }

            if (j2 >= j2_lower && j2 <= j2_upper && _limitError == false)
            {   
                // Limits are within bounds so just pass
            } else {
                _limitError = true; // Throw Limits Error
                _whichJoint = "Joint 2";
                _whichValue = j2;
            }

            if (j3 >= j3_lower && j3 <= j3_upper && _limitError == false)
            {   
                // Limits are within bounds so just pass
            } else {
                _limitError = true; // Throw Limits Error
                _whichJoint = "Joint 3";
                _whichValue = j3;
            }

            if (j4 >= j4_lower && j4 <= j4_upper && _limitError == false)
            {   
                // Limits are within bounds so just pass
            } else {
                _limitError = true; // Throw Limits Error
                _whichJoint = "Joint 4";
                _whichValue = j4;
            }

            if (j5 >= j5_lower && j5 <= j5_upper && _limitError == false)
            {   
                // Limits are within bounds so just pass
            } else {
                _limitError = true; // Throw Limits Error
                _whichJoint = "Joint 5";
                _whichValue = j5;
            }

            if (j6 >= j6_lower && j6 <= j6_upper && _limitError == false)
            {   
                // Limits are within bounds so just pass
            } else {
                _limitError = true; // Throw Limits Error
                _whichJoint = "Joint 6";
                _whichValue = j6;
            }
            RCLCPP_INFO(this->get_logger(), "Joint Limit Checking Complete!");
            // If all limits are within bounds
            if (_limitError == false)
            {
                RCLCPP_INFO(this->get_logger(), "Joint Limit Checking Success. All Limits Are Within Bounds...");
            }
            else // If a limit error has been thrown
            {
                RCLCPP_INFO(this->get_logger(), "MoveJ Limits Checking Failed || %s goal out of bounds: %.2f", _whichJoint.c_str(), _whichValue);
                result->result = "MoveJ:FAILED";
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
    auto m_node_name = "UR3e_MoveJ_Interface";
    auto const mi2_node = std::make_shared<rclcpp::Node>(
        m_node_name, rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true));
    rclcpp::executors::SingleThreadedExecutor executor;
    executor.add_node(mi2_node);
    std::thread([&executor]() {executor.spin();}).detach();

    // Create the MoveIt!2 group interface
    using moveit::planning_interface::MoveGroupInterface;
    static const std::string UR3E = "UR3e";
    move_group_interface = MoveGroupInterface(mi2_node, UR3E);

    // Create MoveIt!2 planning scene interface
    using moveit::planning_interface::PlanningSceneInterface;
    auto planning_scene_interface = PlanningSceneInterface();

    // Create and spin the action server node
    auto movej_action_server = std::make_shared<MoveJ_ActionServer>();
    rclcpp::spin(movej_action_server);

    rclcpp::shutdown();

    return 0;
}