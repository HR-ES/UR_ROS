import os
import xacro
import yaml

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import ExecuteProcess, IncludeLaunchDescription, RegisterEventHandler, DeclareLaunchArgument, TimerAction
from launch.conditions import IfCondition, UnlessCondition
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def load_file(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, 'r') as file:
            return file.read()
    except EnvironmentError:
        return None

def load_yaml(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, 'r') as file:
            return yaml.safe_load(file)
    except EnvironmentError:
        return None
    
def generate_launch_description():
    # Launch Gazebo
    ur3e_gazebo_sim = os.path.join(get_package_share_directory('ur3e_gazebo_sim'), 'worlds', 'ur3e.world')
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('gazebo_ros'),
            'launch'), '/gazebo.launch.py']),
            launch_arguments={'world': ur3e_gazebo_sim}.items(),)
    
    print("-----")
    print("UR3e Simulation")
    print("-----")
    print("Select Configuration:")
    print("1: UR3e Only")
    print("2: UR3e On Pedestal")
    error = True
    while(error == True):
        layout = input("Selection: ")
        if (layout == "1"):
            error = False
            layout_1 = "true"
            layout_2 = "false"
        elif (layout == "2"):
            error = False
            layout_1 = "false"
            layout_2 = "true"
        else:
            print("Please select a valid configuration option.")
    print("-----")

    EndEff = "true"
    
    print("Getting Description")
    # UR3e Description
    ur3e_description_path = os.path.join(
        get_package_share_directory('ur3e_gazebo_sim'))
    # UR3 ROBOT urdf file path:
    xacro_file = os.path.join(ur3e_description_path,
                              'urdf',
                              'ur3e.urdf.xacro')
    print("Parsing Xacro")
    doc = xacro.parse(open(xacro_file))
    xacro.process_doc(doc, mappings={"layout_1": layout_1,
                                     "layout_2": layout_2,
                                     "EndEff": EndEff,})
    print("Getting Robot Description")
    robot_description_config = doc.toxml()
    robot_description = {'robot_description': robot_description_config}

    # SPAWN ROBOT TO GAZEBO:
    print("Spawn Entity")
    spawn_entity = Node(package='gazebo_ros', executable='spawn_entity.py',
                        arguments=['-topic', 'robot_description',
                                   '-entity', 'ur3'],
                        output='screen')

    # ***** STATIC TRANSFORM ***** #
    # NODE -> Static TF:
    print("Static TF")
    static_tf = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="static_transform_publisher",
        output="log",
        arguments=["0.0", "0.0", "0.0", "0.0", "0.0", "0.0", "world", "base_link"],
    )
    # Publish TF:
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='both',
        parameters=[
            robot_description,
            {"use_sim_time": True}
        ]
    )
    # controllers_yaml = load_yaml('ur3e_gazebo_sim', 'config/ur3e_controller.yaml')
    # controllers_node = Node(package="controller_manager", executable="ros2_control_node", parameters=[robot_description, controllers_yaml])
    
    # Load controllers for ROS2 control
    # load_controllers = []
    # for controller in ['ur3e_controller', 'joint_state_controller',]:
    #     load_controllers += [ExecuteProcess(cmd=['ros2 run controller_manager spawner.py {}'.format(controller)],
    #                                         shell=True,
    #                                         output='screen',)]
        
    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
    )
    # Joint TRAJECTORY Controller:
    joint_trajectory_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["ur3e_controller", "-c", "/controller_manager"],
    )
    
    # MoveIt!2 Launch
    # Is there an RViz file?
    rviz_arg = DeclareLaunchArgument('rviz_file', default_value='False', description='Load RViz File')

    # Robot SRDF
    robot_description_semantic_config = load_file('ur3e_moveit', 'config/ur3e.srdf')
    robot_description_semantic = {'robot_description_semantic': robot_description_semantic_config}

    # Kinematics.yaml
    kinematics_yaml = load_yaml('ur3e_moveit', 'config/kinematics.yaml')
    robot_description_kinematics = {'robot_description_kinematics': kinematics_yaml}

    # OMPL Planning
    ompl_planning_pipeline_config = {'move_group': {'planning_plugin': 'ompl_interface/OMPLPlanner',
                                                    'request_adapters': """default_planner_request_adapters/AddTimeOptimalParameterization default_planner_request_adapters/FixWorkspaceBounds default_planner_request_adapters/FixStartStateBounds default_planner_request_adapters/FixStartStateCollision default_planner_request_adapters/FixStartStatePathConstraints""",
                                                    'start_state_max_bounds_error': 0.1,}}
    
    ompl_planning_yaml = load_yaml('ur3e_moveit', 'config/ompl_planning.yaml')
    ompl_planning_pipeline_config['move_group'].update(ompl_planning_yaml)

    # MoveIt Controllers
    moveit_simple_controllers_yaml = load_yaml('ur3e_moveit', 'config/ur3e_controllers.yaml')
    moveit_controllers = {'moveit_simple_controller_manager': moveit_simple_controllers_yaml,
                          'moveit_controller_manager': 'moveit_simple_controller_manager/MoveItSimpleControllerManager',}
    
    

    trajectory_execution = {'moveit_manage_controllers': True,
                            'trajectory_execution.allowed_execution_duration_scaling': 1.2,
                            'trajectory_execution.allowed_goal_duration_margin': 0.5,
                            'trajectory_execution.allower_start_tolerance': 0.01,}
    
    Planning_scene_monitor_parameters = {'publish_planning_scene': True,
                                         'publish_geometry_updates': True,
                                         'publish_state_updates': True,
                                         'publish_transform_updates': True,}
    
    # Start movegroup node
    run_move_group_node = Node(package='moveit_ros_move_group',
                               executable='move_group',
                               output='screen',
                               parameters=[robot_description,
                                           robot_description_semantic,
                                           robot_description_kinematics,
                                           ompl_planning_pipeline_config,
                                           trajectory_execution,
                                           moveit_controllers,
                                           Planning_scene_monitor_parameters,
                                           {"use_sim_time": True},])
    
    # Start RViz Node
    load_RVIZfile = LaunchConfiguration('rviz_file')
    rviz_base = os.path.join(get_package_share_directory('ur3e_moveit'), 'config')
    rviz_full_config = os.path.join(rviz_base, 'ur3e_moveit2.rviz')
    rviz_node_full = Node(package='rviz2',
                          executable='rviz2',
                          name='rviz2',
                          output='log',
                          arguments=['-d', rviz_full_config],
                          parameters=[robot_description,
                                      robot_description_semantic,
                                      ompl_planning_pipeline_config,
                                      robot_description_kinematics,
                                      {"use_sim_time": True},],
                          condition=UnlessCondition(load_RVIZfile),)
    
    # MoveJ Action Interface
    moveJ_interface = Node(name='moveJ_action',
                           package='ur3e_ros_action_cpp',
                           executable='moveJ_action',
                           output='screen',
                           parameters=[robot_description, robot_description_semantic, robot_description_kinematics, {"use_sim_time": True}],)
    
    return LaunchDescription(
        [
            # Gazebo nodes:
            gazebo, 
            spawn_entity,
            # ROS2_CONTROL:
            static_tf,
            robot_state_publisher,
            
            # ROS2 Controllers:
            RegisterEventHandler(
                OnProcessExit(
                    target_action = spawn_entity,
                    on_exit = [
                        joint_state_broadcaster_spawner,
                    ]
                )
            ),
            RegisterEventHandler(
                OnProcessExit(
                    target_action = joint_state_broadcaster_spawner,
                    on_exit = [
                        joint_trajectory_controller_spawner,
                    ]
                )
            ),

            RegisterEventHandler(
                OnProcessExit(
                    target_action = joint_trajectory_controller_spawner,
                    on_exit = [

                        # MoveIt!2:
                        TimerAction(
                            period=2.0,
                            actions=[
                                rviz_arg,
                                rviz_node_full,
                                run_move_group_node
                            ]
                        ),

                        # ROS2.0 Actions:
                        TimerAction(
                            period=2.0,
                            actions=[
                                moveJ_interface,
                                
                            ]
                        ),

                    ]
                )
            )
        ]
    )