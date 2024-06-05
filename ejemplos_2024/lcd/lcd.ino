#include <Keypad.h>
int rojo = 13;
int azul = 9;
int verde = 10;
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'7', '8', '9', '/'},
  {'4', '5', '6', '*'},
  {'1', '2', '3', '+'},
  {'O', '0', '=', '-'}
};
byte rowPins[ROWS] = {12, 11, 8, 7}; //Filas(pines del 7,8 y 12, 13)
byte colPins[COLS] = {6, 5, 4, 2}; //Columnas (pines del 2, 4 al 6)
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
  pinMode(rojo,OUTPUT);
  pinMode(azul,OUTPUT);
  pinMode(verde,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char key = keypad.getKey();
  //delay(3000);
  if (key){
    switch (key){
      case '7':
        digitalWrite(rojo,HIGH);
        break;
      case '4':
        digitalWrite(rojo,LOW);
        break;
    }
  }
  
  
}
