//Car with sensor and servo steering
//Cooper G

int drive = 9;
int turn = 10;
int pos1 = 11;
  
#include <NewPing.h>
#include <Servo.h> 

Servo driveSpark;
Servo turnServo;

#define TRIG_PIN A0 
#define ECHO_PIN A1 
#define MAX_DISTANCE 200 
#define MAX_SPEED 190 // sets speed of DC  motors
#define MAX_SPEED_OFFSET 20

NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE); 


Servo myservo;   

boolean goesForward=false;
int distance = 100;
int speedSet = 0;

void setup() {

 driveSpark.attach(drive);
  delay(2000);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
 
}

void loop() {
 
 int distanceR = 0;
 int distanceL =  0;
 delay(200);

 driveSpark.writeMicroseconds(1600); //move slowly
  
 // driveSpark.write(10); 
 // delay(1500);
 // driveSpark.write(170); move HELLA quick
 
 if(distance<=50) // car stops, goes backward for half a second
 {
driveSpark.writeMicroseconds(1500);
  delay(500);
 driveSpark.writeMicroseconds(1400);
  delay(500);
 
 }
 distance = readPing();
}


int readPing() { 
  delay(70);
  int cm = sonar.ping_cm();
  if(cm==0)
  {
    cm = 250;
  }
  return cm;

  
}
