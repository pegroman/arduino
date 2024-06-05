int parlante=3;
void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(parlante,220);
  delay(4000);
  noTone(parlante);
  delay(2000);
}
