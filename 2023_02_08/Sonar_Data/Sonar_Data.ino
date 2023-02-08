#include <NewPing.h>
#define MAX_DISTANCE 350
NewPing FL_sensor(10,10,400);
  float L_Sonar_distance = 0.0;
NewPing FR_sensor(9,9,400);
  float R_Sonar_distance = 0.0;
NewPing B_sensor(11,11,400);
  float B_Sonar_distance = 0.0;

void read_sonar_sensor(void){ //초음파센서 측정
    FL_Sonar_distance = FR_sensor.ping_cm()*10.0;
    FR_Sonar_distance = FR_sensor.ping_cm()*10.0;
    B_Sonar_distance = FB_sensor.ping_cm()*10.0;
    if(FR_Sonar_distance == 0){FR_Sonar_distance = MAX_DISTANCE * 10.0;}
    if(FL_Sonar_distance == 0){FL_Sonar_distance = MAX_DISTANCE * 10.0;}
    if(B_Sonar_distance == 0){B_Sonar_distance = MAX_DISTANCE * 10.0;}
  }
void setup() {
  Serial.begin(115200);
}
void loop() {
  read_sonar_sensor();
  Serial.print(FL_Sonar_distance);
  Serial.print(FR_Sonar_distance); 
  Serial.println(B_Sonar_distance);
 
}
 