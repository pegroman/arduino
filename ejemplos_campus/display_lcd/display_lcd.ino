
#include <LiquidCrystal.h> // Libreria para que funcione el LCD
LiquidCrystal lcd(1, 0, A1, A2, 10, 9); // RS=1 , E=0, A1=D4, A2=D5, 10=D6, 9= D7 esta linea muestra en que pines debe ir conectado la pantalla LCD a nuestro Arduino
 
void setup() {
lcd.begin(16, 2); // Con esta instrucción indicamos cual es la proporción de nuestro LCD
lcd.print("CDM-Ingenieria-"); // Una instrucción muy importante ya que con esta imprimiremos el texto en nuestra pantalla
}
 
void loop() {
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("UNLP:"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD
lcd.println(millis() / 1000); // Con esta instrucción realizamos un simple contador y con Prinln indicamos que queremos que se imprima en la segunda fila, después de la instrucción anterior.
}
