#include <stdio.h>
#define THUMP_PIN 19
#define THUMP_FINGER_PIN 18
#define INDEX_PIN 5
#define MIDDLE_PIN 4
#define RING_PIN 2
#define LITTLE_PIN 15

#define EMG_PIN A6
#include <Servo_ESP32.h>
#define THUMP 0
#define INDEX 1
#define MIDDLE 2
#define RING 3
#define LITTLE 4


const int servoCount = 5;// how many servo
static const int servosPins[servoCount] = {THUMP_PIN, INDEX_PIN, MIDDLE_PIN, RING_PIN, LITTLE_PIN}; // define pins here

int booldown = 0;

Servo_ESP32 servos[servoCount];//do not change
//EMG Sensor
int grade = 0;
int values[5];
int cont = 0;

void setServos(int degrees) {
  int up = 180 - degrees;
  for (int i = 0; i < servoCount; ++i) {
    if (i == THUMP)
    {
      if (up > 120)
        servos[i].write(120 % 121);
      else
        servos[i].write(up % 121);
    }
    else if (i == MIDDLE || i == LITTLE)
      servos[i].write(up % 181);
    else
      servos[i].write(degrees % 181);
  }
}

void setup() {
  Serial.begin(115200);

  for (int i = 0; i < servoCount; ++i) {
    servos[i].attach(servosPins[i]);
  }
}
int read_emg()
{
  values[cont] = analogRead(A6) % 1024;
  cont ++;
  if (cont == 5)
  {
    cont = 0;
  }
  int total = 0;
  for (int i = 0; i < 5; i++)
  {
    total += values[i];
  }

  int media = total / 5;

  return media / 2;
}

void loop() {
  grade = read_emg();
  
  if(grade > 70)
    setServos(180);
  else
    setServos(10);
  
  delay(100);

}
