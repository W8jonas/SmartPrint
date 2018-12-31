/*
 * 
 * Autor......................: Jonas Henrique Nascimento
 * Nickname...................: W8jonas
 * Data de inicio.............: 30/12/2018
 * Ultima alteração do sketch.: 30/12/2018
 * 
*/

#include "Arduino.h"
#include "SmartPrint.h"

SmartPrint::SmartPrint(int bound_rate){
   _bound_rate = bound_rate;
   Serial.begin(_bound_rate);
}

void show(String palavra, int time_to_delay){
  Serial.println(palavra);
  delay(time_to_delay);
}

void show(String palavra){
  Serial.println(palavra);
}

