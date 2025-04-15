#include <webots/robot.h>
#include <webots/motor.h>

#define TIME_STEP 16

#define HORIZONTAL 0
#define VERTICAL 1.5
#define HORIZONTAL_THUMP 1
#define VERTICAL_THUMP 0
//primera falange del pulgar a 0.5

void close_hand();
void open_hand();

WbDeviceTag ph[15];
WbDeviceTag th;

char ph_name[15][20] = {"phalanx1","phalanx2", "phalanx3",
                    "phalanx4","phalanx5", "phalanx6",
                    "phalanx7","phalanx8", "phalanx9",
                    "phalanx10","phalanx11", "phalanx12",
                    "phalanx13", "phalanx14", "phalanx15"};
                   
char th_name[10] = "thump";

float grade_phalanx = HORIZONTAL;
float grade_thump = VERTICAL_THUMP;

int main(int argc, char **argv) {
  
  wb_robot_init();
  
  for(int i = 0; i < 15; i++){
    ph[i] = wb_robot_get_device(ph_name[i]);
    wb_motor_set_position(ph[i], INFINITY);
  }
  th = wb_robot_get_device(th_name);
  wb_motor_set_position(th, INFINITY);
  
  int close = 1;
  int cont = 0;
  
  while (wb_robot_step(TIME_STEP) != -1){
    if(close == 0){
      for(int i = 0; i < 15; i++)
        wb_motor_set_position(ph[i], 0);
      wb_motor_set_position(th, 0);
      close = 1;
      while(cont == 500000)
        cont ++;
      cont = 0;
    }
    else {
      for(int i = 0; i < 12; i++)
        wb_motor_set_position(ph[i], 1.5);
      wb_motor_set_position(ph[12], 1);
      for(int i = 13; i < 15; i++)
        wb_motor_set_position(ph[i], 1.5);
      wb_motor_set_position(th, 1);
      close = 0;
      while(cont != 500000)
        cont ++;
      cont = 0;
    }
  }
  wb_robot_cleanup();

  return 0;
}