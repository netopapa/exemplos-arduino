const int led1 = 9;
const int led2 = 4;
int brilho = 0;
int fade = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led1, brilho);
  analogWrite(led2, brilho);

  brilho += fade;

  if(brilho <= 0 || brilho >= 255){
    fade *= -1;
  }

  delay(10);
}
