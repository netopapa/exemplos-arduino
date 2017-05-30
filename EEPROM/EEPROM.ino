#include <EEPROM.h>

int cont = 1;
void setup() {
  // put your setup code here, to run once:
  EEPROM.write(120, cont);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2), fun, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
}

void fun(){
  cont++;
  EEPROM.write(120, cont);
  Serial.println(EEPROM.read(120));
}
