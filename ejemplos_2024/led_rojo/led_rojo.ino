int rojo = 13;
int azul = 9; 
int verde = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(rojo,OUTPUT);
  pinMode(azul,OUTPUT);
  pinMode(verde,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rojo,HIGH);
  digitalWrite(verde,HIGH);
  digitalWrite(azul,HIGH);
  delay(5000);
  digitalWrite(rojo,LOW);
  digitalWrite(verde,LOW);
  digitalWrite(azul,LOW);
  delay(5000);
}
