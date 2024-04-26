from robot_control_class import RobotControl

rc = RobotControl()

laser1 = rc.get_laser(360)
laser2 = rc.get_laser(420)

print ("Nilai laser1: ", laser1, " m.")
print ("Nilai laser2: ", laser2, " m.")