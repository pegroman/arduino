#include <Keypad.h>
#include <LiquidCrystal.h> // Libreria para que funcione el LCD
LiquidCrystal lcd(1, 0, A1, A2, 10, 9); // RS=1 , E=0, A1=D4, A2=D5, 10=D6, 9= D7 esta linea muestra en que pines debe ir conectado la pantalla LCD a nuestro Arduino

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
 {'1','2','3','A'},
 {'4','5','6','B'},
 {'7','8','9','C'},
 {'0','E','F','D'}
};
  byte rowPins[ROWS] = {12,11,8,7}; //Filas(pines del 7,8 y 12, 13)
byte colPins[COLS] = {6,5,4,2}; //Columnas (pines del 2, 4 al 6)
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
//int led = 13;
////////////////////////////////////////////////////////////////////VOID SETUP
void setup(){

//Serial.begin (9600);
lcd.begin(16, 2); // Con esta instrucción indicamos cual es la proporción de nuestro LCD
lcd.print("CDM-Ingenieria-"); // Una instrucción muy importante ya que con esta imprimiremos el texto en nuestra pantalla

//pinMode(led, OUTPUT);
}
////////////////////////////////////////////////////////////////////VOID LOOP
void loop(){
char key = keypad.getKey();
/////////////////////////////////////////Boton A
if(key) {
switch (key)
{
case 'A'://Cuando key "A" es oprimida...  
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:A"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD        
//Serial.println("A");//El monitor serial escribe "ElectroCrea.com"
//digitalWrite(led, HIGH);//El led se enciende
break;
case 'B'://Cuando key "B" es oprimida...  
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:B"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD        
//Serial.println("B");//El monitor serial escribe "Visítanos"
//digitalWrite(led, LOW);//El led se apaga
break;
case 'C'://Cuando key "B" es oprimida...  
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:C"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD        
Serial.println("c");//El monitor serial escribe "Visítanos"
//digitalWrite(led, LOW);//El led se apaga
break;
case 'D'://Cuando key "B" es oprimida... 
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:D"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD         
//Serial.println("D");//El monitor serial escribe "Visítanos"
//digitalWrite(led, LOW);//El led se apaga
break;
case 'E'://Cuando key "B" es oprimida... 
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:E"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD         
//Serial.println("E");//El monitor serial escribe "Visítanos"
//digitalWrite(led, LOW);//El led se apaga
break;
case 'F'://Cuando key "B" es oprimida...   
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:F"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD       
//Serial.println("F");//El monitor serial escribe "Visítanos"
//digitalWrite(led, LOW);//El led se apaga
break;
}
}

/////////////////////////////////////////Números del 0 al 9
if(key) {
switch (key)
{
case '1':  
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:1"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD      
//Serial.println("1");
break;
case '2':   
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:2"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD     
//Serial.println("2");
break;
case '3':    
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:3"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD    
//Serial.println("3");
break;
case '4':     
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:4"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD   
//Serial.println("4");
break;
case '5':   
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:5"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD     
//Serial.println("5");
break;
case '6':    
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:6"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD    
//Serial.println("6");
break;
case '7':   
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:7"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD     
//Serial.println("7");
break;
case '8':
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:8"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD
//Serial.println("8");
break;
case '9':     
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:9"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD   
//Serial.println("9");
break;
case '0': 
lcd.setCursor(0, 1); // con esta linea damos a entender que la primera fila de nuestro LCd ya esta siendo usada por lo cual queremos usar la segunda
lcd.print("tecla:0"); // Al ser colocadar debajo de la instrucción anterior, este mensaje se mostrara en la segunda fila del LCD       
//Serial.println("0");
break;
}
}

///...
}
//Mas información en CDM
