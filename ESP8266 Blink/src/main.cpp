#include <Arduino.h>

#define LED LED_BUILTIN //LEd de builtin na porta D4

void setup() {
  pinMode(LED, OUTPUT); //Define a porta D4 como saida
}

void loop() {
  digitalWrite(LED, HIGH);  //Ligar o LED
  delay(500);               //Dá uma pausa no codigo por 0,5 segundos
  digitalWrite(LED, LOW);   //Desligar o LED
  delay(500);               //Dá uma pausa no codigo por 0,5 segundos
}