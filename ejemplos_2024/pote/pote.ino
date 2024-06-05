int pote = 3;
int algo = 0;
int mapeado = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  algo = analogRead(pote);
  mapeado = map(algo, 0, 1023, 0, 255);
  Serial.println(mapeado);
  delay(1000);

}
