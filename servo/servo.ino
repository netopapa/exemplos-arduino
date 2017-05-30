#include <Servo.h>
Servo servo;
const int pino = 6;
int pos = 0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(pino);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(pos = 0; pos <= 180; pos++){
    servo.write(pos);
    delay(15);
  }

  for(pos = 180; pos >= 0; pos--){
    servo.write(pos);
    delay(15);
  }
  
}
