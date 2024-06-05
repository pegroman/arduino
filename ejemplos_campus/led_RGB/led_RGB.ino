#include <Wire.h>
#include "RTClib.h"

int pinLedR = 13; // pin Rojo del LED RGB
int pinLedV = 10; // pin Verde del LED RGB
int pinLedA = 9; // pin Azul del LED RGB
int pausa = 1000;
RTC_DS3231 rtc;
 
String daysOfTheWeek[7] = { "Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado" };
String monthsNames[12] = { "Enero", "Febrero", "Marzo", "Abril", "Mayo",  "Junio", "Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre" };
 
void setup()
{
pinMode(pinLedR, OUTPUT); // pone el pinLedR como output
pinMode(pinLedV, OUTPUT); // pone el pinLedV como output
pinMode(pinLedA, OUTPUT); // pone el pinLedA como output
 Serial.begin(9600);
   delay(1000); 
 
   if (!rtc.begin()) {
      Serial.println(F("Couldn't find RTC"));
       while (1);
   }
     // Si se ha perdido la corriente, fijar fecha y hora
   if (rtc.lostPower()) {
      // Fijar a fecha y hora de compilacion
      rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
      
      // Fijar a fecha y hora específica. En el ejemplo, 21 de Enero de 2016 a las 03:00:00
      // rtc.adjust(DateTime(2016, 1, 21, 3, 0, 0));
}
}
void printDate(DateTime date)
{
   Serial.print(date.year(), DEC);
   Serial.print('/');
   Serial.print(date.month(), DEC);
   Serial.print('/');
   Serial.print(date.day(), DEC);
   Serial.print(" (");
   Serial.print(daysOfTheWeek[date.dayOfTheWeek()]);
   Serial.print(") ");
   Serial.print(date.hour(), DEC);
   Serial.print(':');
   Serial.print(date.minute(), DEC);
   Serial.print(':');
   Serial.print(date.second(), DEC);
   Serial.println();
}

void loop()
{
//Colores básicos
DateTime now = rtc.now();
   printDate(now);
color(255, 0, 0); // Rojo
delay(1000);
now = rtc.now();
   printDate(now);
color(0, 255, 0); // Verde
delay(1000);
now = rtc.now();
   printDate(now);
color(0, 0, 255); // Azul
delay(1000);
now = rtc.now();
   printDate(now);
//Colores mezclados
color(255, 255, 255); // Blanco
delay(1000);
now = rtc.now();
   printDate(now);
color(255, 255, 0); // Amarillo
delay(1000);
now = rtc.now();
   printDate(now);
color(255, 0, 255); // Magental
delay(1000);
now = rtc.now();
   printDate(now);
color(0, 255, 255); // Cian
delay(1000);
now = rtc.now();
   printDate(now);
color(0, 0, 0); // Apagado
delay(1000);
}

// funcion para generar colores
void color(int rojo, int verde, int azul)
{
analogWrite(pinLedR, rojo);
analogWrite(pinLedV, verde);
analogWrite(pinLedA, azul);
}
