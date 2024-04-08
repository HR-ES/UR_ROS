import os
import xacro
import yaml

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import ExecuteProcess, IncludeLaunchDescription, RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

# Load input file
def load_file(package_name, filepath):
    # Find path to package on system
    package_path = get_package_share_directory(package_name)
    # Create an absolute path to the specified file
    absolute_filepath = os.path.join(package_path, filepath)

    try:
        # Attempt to read the file, and return data on success
        with open(absolute_filepath, 'r') as file:
            return file.read()
    # Throw exception on failure
    except EnvironmentError:
        return None
    
# Load YAML file
def load_yaml(package_name, filepath):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, filepath)

    try:
        with open(absolute_file_path, 'r') as file:
            return yaml.safe_load(file)
    except EnvironmentError:
        return None
    
# Generate the launch description
def generate_launch_description():

    # Start with Gazebo
    # Declare the gazebo world file
    ur3e_gazebo_sim = os.path.join(get_package_share_directory('ur3e_gazebo_sim'), 'worlds', 'ur3e.world')

    # Declare the gazebo launch file
    gazebo = IncludeLaunchDescription(PythonLaunchDescriptionSource([os.path.join(
        get_package_share_directory('gazebo_ros'), 'launch'),
          '/gazebo.launch.py']),
            launch_arguments={'world': ur3e_gazebo_sim}.items(),)

    # Arguments
    print("-----")
    print("UR3e Gazebo Simulation")
    print("-----")
    print("Simulation Configuration:")

    # Layout config
    print("/-World Layout:")

    error = True

    while(error == True):
        print("Option 1: UR3e Only")
        print("Option 2: UR3e on Column")
        layout = input("Select option 1 or 2:")

        if(layout == "1"):
            layout_1 = "true"
            layout_2 = "false"
            error = False
        elif(layout == "2"):
            layout_1 = "false"
            layout_2 = "true"
            error = False
        else:
            print("Please select a valid option")
    print("------")

    # End effector config
    print("/-End Effector:")
    print("!! No End Effector types applicable for UR3e currently.")
    print("-----")
    EndEff = "true"

    # Robot Description

    # UR3e description package
    ur3e_description_path = os.path.join(get_package_share_directory('ur3e_gazebo_sim'))

    # UR3e urdf file
    xacro_file = os.path.join(ur3e_description_path, 'urdf', 'ur3e.urdf.xacro')

    # Generate description for UR3e
    doc = xacro.parse(open(xacro_file))
    xacro.process_doc(doc, mappings={"layout_1": layout_1, "layout_2": layout_2, "EndEff": EndEff,})
    robot_description_config = doc.toxml()
    robot_description = {'robot_description': robot_description_config}

    # Robot State Publisher Node
    robot_state_publisher_node = Node(package='robot_state_publisher', executable='robot_state_publisher', output='screen', parameters=[robot_description])

    # Robot spawning in Gazebo
    spawn_entity = Node(package='gazebo_ros', executable='spawn_entity.py',
                        arguments=['-topic', 'robot_description', '-entity', 'ur3e'], output='screen')
    
    # Return full launch description
    return LaunchDescription([gazebo, robot_state_publisher_node, spawn_entity])