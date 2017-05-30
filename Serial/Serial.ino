const int pin = 13;
char tecla;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tecla = Serial.read();
  if(tecla == 'l'){
    digitalWrite(pin, true);
  }else if(tecla == 'd'){
    digitalWrite(pin, false);
  }
}
