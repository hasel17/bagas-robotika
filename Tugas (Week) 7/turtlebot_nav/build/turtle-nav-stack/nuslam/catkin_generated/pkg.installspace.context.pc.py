# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "gazebo_ros;geometry_msgs;message_runtime;roscpp;sensor_msgs;std_msgs;tf2;visualization_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lnuslam".split(';') if "-lnuslam" != "" else []
PROJECT_NAME = "nuslam"
PROJECT_SPACE_DIR = "/home/nazrin/turtlebot_nav/install"
PROJECT_VERSION = "0.0.1"