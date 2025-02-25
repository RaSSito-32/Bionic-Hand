import rclpy
from std_msgs.msg import Float32

VERTICAL_PHALANX = 1.5
VERTICAL_THUMP = 1.0
HORIZONTAL = 0

class HandDriver:
    def init(self, webots_node, properties):
        self.__robot = webots_node.robot

        self.__ph1 = self.__robot.getDevice('phalanx1')
        self.__ph2 = self.__robot.getDevice('phalanx2')
        self.__ph3 = self.__robot.getDevice('phalanx3')
        self.__ph4 = self.__robot.getDevice('phalanx4')
        self.__ph5 = self.__robot.getDevice('phalanx5')
        self.__ph6 = self.__robot.getDevice('phalanx6')
        self.__ph7 = self.__robot.getDevice('phalanx7')
        self.__ph8 = self.__robot.getDevice('phalanx8')
        self.__ph9 = self.__robot.getDevice('phalanx9')
        self.__ph10 = self.__robot.getDevice('phalanx10')
        self.__ph11 = self.__robot.getDevice('phalanx11')
        self.__ph12 = self.__robot.getDevice('phalanx12')
        self.__th = self.__robot.getDevice('thump')
        self.__ph13 = self.__robot.getDevice('phalanx13')
        self.__ph14 = self.__robot.getDevice('phalanx14')
        self.__ph15 = self.__robot.getDevice('phalanx15')


        self.__ph1.setPosition(float('inf'))
        self.__ph1.setVelocity(0)

        self.__ph2.setPosition(float('inf'))
        self.__ph2.setVelocity(0)

        self.__ph3.setPosition(float('inf'))
        self.__ph3.setVelocity(0)

        self.__ph4.setPosition(float('inf'))
        self.__ph4.setVelocity(0)

        self.__ph4.setPosition(float('inf'))
        self.__ph4.setVelocity(0)

        self.__ph5.setPosition(float('inf'))
        self.__ph5.setVelocity(0)

        self.__ph6.setPosition(float('inf'))
        self.__ph6.setVelocity(0)
        
        self.__ph7.setPosition(float('inf'))
        self.__ph7.setVelocity(0)
        
        self.__ph8.setPosition(float('inf'))
        self.__ph8.setVelocity(0)

        self.__ph9.setPosition(float('inf'))
        self.__ph9.setVelocity(0)

        self.__ph10.setPosition(float('inf'))
        self.__ph10.setVelocity(0)

        self.__ph11.setPosition(float('inf'))
        self.__ph11.setVelocity(0)

        self.__ph12.setPosition(float('inf'))
        self.__ph12.setVelocity(0)

        self.__th.setPosition(float('inf'))
        self.__th.setVelocity(0)
        
        self.__ph13.setPosition(float('inf'))
        self.__ph13.setVelocity(0)

        self.__ph14.setPosition(float('inf'))
        self.__ph14.setVelocity(0)

        self.__ph15.setPosition(float('inf'))
        self.__ph15.setVelocity(0)

        self.__target_grade = Float32()

        rclpy.init(args=None)
        self.__node = rclpy.create_node('hand_driver')
        self.__node.create_subscription(Float32, 'cmd_hnd_mov', self.__cmd_hnd_mov_callback, 1)

    def __cmd_hnd_mov_callback(self, grade):
        self.__target_grade = grade

    def step(self):
        
        rclpy.spin_once(self.__node, timeout_sec=0)

        actual_grade = self.__target_grade.data
        thump_grade = actual_grade

        if(actual_grade > 1.5):
            actual_grade = 1.5
        if(actual_grade < 0.0):
            actual_grade = 0.0
            thump_grade = 0.0

        if(thump_grade > 1.0):
            thump_grade = 1.0

        #emplear el código para que sea capaz de abrir la mano.
        self.__ph1.setPosition(actual_grade)
        self.__ph1.setVelocity(1)

        self.__ph2.setPosition(actual_grade)
        self.__ph2.setVelocity(1)

        self.__ph3.setPosition(actual_grade)
        self.__ph3.setVelocity(1)

        self.__ph4.setPosition(actual_grade)
        self.__ph4.setVelocity(1)

        self.__ph4.setPosition(actual_grade)
        self.__ph4.setVelocity(1)

        self.__ph5.setPosition(actual_grade)
        self.__ph5.setVelocity(1)

        self.__ph6.setPosition(actual_grade)
        self.__ph6.setVelocity(1)
        
        self.__ph7.setPosition(actual_grade)
        self.__ph7.setVelocity(1)
        
        self.__ph8.setPosition(actual_grade)
        self.__ph8.setVelocity(1)

        self.__ph9.setPosition(actual_grade)
        self.__ph9.setVelocity(1)

        self.__ph10.setPosition(actual_grade)
        self.__ph10.setVelocity(1)

        self.__ph11.setPosition(actual_grade)
        self.__ph11.setVelocity(1)

        self.__ph12.setPosition(actual_grade)
        self.__ph12.setVelocity(1)
        
        self.__th.setPosition(thump_grade)
        self.__th.setVelocity(1)

        self.__ph13.setPosition(thump_grade/2)
        self.__ph13.setVelocity(1)

        self.__ph14.setPosition(actual_grade)
        self.__ph14.setVelocity(1)

        self.__ph15.setPosition(actual_grade)
        self.__ph15.setVelocity(1)
