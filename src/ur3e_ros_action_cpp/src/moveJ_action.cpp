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
            const auto goal = goal_handle->get_goal();
            auto JointGoal = goal->goal;
            auto speed = goal->speed;

            // Apply requested speed to moveit speed scaling factor
            move_group_interface.setMaxVelocityScalingFactor(speed);
            move_group_interface.setMaxAccelerationScalingFactor(1.0);
            //No feedback required

            // Declare result
            auto result = std::make_shared<MoveJ::Result>();

            // ---JOINT GOAL LIMITS CHECKING--- //
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

            // If all limits are within bounds
            if (_limitError == false)
            {

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

    rclcpp::shutdown();

    return 0;
}