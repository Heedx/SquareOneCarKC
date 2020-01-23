int drive = 9;
int turn = 10;
#include <Servo.h>
Servo driveSpark;
Servo turnServo;
void setup() {
  // put your setup code here, to run once:
  driveSpark.attach(drive);
}

void loop() {
  driveSpark.writeMicroseconds(1600);
//  driveSpark.write(10);
//  delay(1500);
//  driveSpark.write(170);
}
