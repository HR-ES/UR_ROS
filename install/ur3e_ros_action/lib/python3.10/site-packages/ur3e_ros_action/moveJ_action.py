import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from ur3e_ros_data.action import MoveJ

class MoveJ_ActionServer(Node):

    def __init__(self):
        super().__init__('movej_action_server')
        self._action_server = ActionServer(
            self,
            MoveJ,
            'movej',
            self.execute_callback
        )

    def execute_callback(self, goal_handle):
        self.get_logger().info("Executing MoveJ Goal...")
        result = MoveJ.Result()
        return result

def main(args=None):
    rclpy.init(args=args)
    movej_action_server = MoveJ_ActionServer()
    rclpy.spin(movej_action_server)

if __name__ == "__main__":
    main()