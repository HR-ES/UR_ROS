import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from ur3e_ros_data.action import MoveJ
from ur3e_ros_data.msg import JointPose

# UR3e Joint Limits
JOINT_LIMITS = {'joint1_upper': 360,
                    'joint2_upper': 360,
                    'joint3_upper': 180,
                    'joint4_upper': 360,
                    'joint5_upper': 360,
                    'joint6_upper': 360,
                    'joint1_lower': -360,
                    'joint2_lower': -360,
                    'joint3_lower': -180,
                    'joint4_lower': -360,
                    'joint5_lower': -360,
                    'joint6_lower': -360}
# Global flag to determine whether goal execuition should be aborted
ABORT_FLAG = False

class MoveJ_ActionServer(Node):

    def __init__(self):
        super().__init__('movej_action_server')
        # Initialise action server for MoveJ action
        self._action_server = ActionServer(
            self,
            MoveJ,
            'movej',
            self.execute_callback
        )
    
    #TODO: Calculate if requested speed would be over the velocity limits of joints 
    #(conversion from seconds for move to degrees per second of joint. Probably something to do with moveit2 trajectory planning)

    def execute_callback(self, goal_handle):
        self.get_logger().info("Executing MoveJ Goal...")
        _temp_result, _temp_abort_flag = self.check_joint_limits(goal_handle) # Store the result to be displayed on action client, and returned abort flaG
        
        # CHeck whether goal has succeeded, or should be aborted
        ABORT_FLAG = _temp_abort_flag
        if ABORT_FLAG == False:
            goal_handle.succeed() # Report that the goal has been successful in completing
        if ABORT_FLAG == True:
            goal_handle.abort()

        result = MoveJ.Result() # Store the action result handle in a variable
        result.result = _temp_result # Access the result data in the handle, and store the temp result in this to be shown in the action client
        return result
    
    def check_joint_limits(self, goal):
        # Get the joint input request from the goal, and split into individual joint variables
        joint1_req = goal.request.goal.joint1
        joint2_req = goal.request.goal.joint2
        joint3_req = goal.request.goal.joint3
        joint4_req = goal.request.goal.joint4
        joint5_req = goal.request.goal.joint5
        joint6_req = goal.request.goal.joint6

        result = ''

        _temp_abort_flag = False

        self.get_logger().info("Checking requested goal is within joint limits...")

        # Cross reference input joint goal positions with dict of UR3e Joint Lits. 
        # If all is good, carry on, if not, set the abort flag and log which joint is out of bounds
        if (joint1_req > JOINT_LIMITS['joint1_upper']) or (joint1_req < JOINT_LIMITS['joint1_lower']):
            self.get_logger().info("Goal of {} for Joint 1 is past joint limit of +/- 360 degrees.".format(joint1_req))
            result = 'Joint 1 goal out of bounds.'
            _temp_abort_flag = True
        elif (joint2_req > JOINT_LIMITS['joint2_upper']) or (joint2_req < JOINT_LIMITS['joint2_lower']):
            self.get_logger().info("Goal of {} for Joint 2 is past joint limit of +/- 360 degrees.".format(joint2_req))
            result = 'Joint 2 goal out of bounds.'
            _temp_abort_flag = True
        elif (joint3_req > JOINT_LIMITS['joint3_upper']) or (joint3_req < JOINT_LIMITS['joint3_lower']):
            self.get_logger().info("Goal of {} for Joint 3 is past joint limit of +/- 180 degrees.".format(joint3_req))
            result = 'Joint 3 goal out of bounds.'
            _temp_abort_flag = True
        elif (joint4_req > JOINT_LIMITS['joint4_upper']) or (joint4_req < JOINT_LIMITS['joint4_lower']):
            self.get_logger().info("Goal of {} for Joint 4 is past joint limit of +/- 360 degrees.".format(joint4_req))
            result = 'Joint 4 goal out of bounds.'
            _temp_abort_flag = True
        elif (joint5_req > JOINT_LIMITS['joint5_upper']) or (joint5_req < JOINT_LIMITS['joint5_lower']):
            self.get_logger().info("Goal of {} for Joint 5 is past joint limit of +/- 360 degrees.".format(joint5_req))
            result = 'Joint 5 goal out of bounds.'
            _temp_abort_flag = True
        elif (joint6_req > JOINT_LIMITS['joint6_upper']) or (joint6_req < JOINT_LIMITS['joint6_lower']):
            self.get_logger().info("Goal of {} for Joint 6 is past joint limit of +/- 360 degrees.".format(joint6_req))
            result = 'Joint 6 goal out of bounds.'
            _temp_abort_flag = True
        else:
            self.get_logger().info("All joint positions are valid!")
            result = 'All joint goals valid!'
        return result, _temp_abort_flag # TODO: This result will probably change in the near future. Using as a placeholder to report back failure or success

def main(args=None):
    rclpy.init(args=args)
    movej_action_server = MoveJ_ActionServer()
    rclpy.spin(movej_action_server)

if __name__ == "__main__":
    main()