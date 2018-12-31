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

Smart_Print::Smart_Print(unsigned long bound_rate){
    _bound_rate = bound_rate;
}

void Smart_Print::Speed_comunication(unsigned long bound_rate_2){
   Serial.begin(bound_rate_2);
}

void Smart_Print::show(String palavra, int time_to_delay, unsigned long bound_rate_2){
   Serial.begin(bound_rate_2);
   Serial.println(palavra);
   delay(time_to_delay);
}

void Smart_Print::show(String palavra, int time_to_delay){
   Serial.println(palavra);
   delay(time_to_delay);
}

void Smart_Print::show(String palavra){
   Serial.println(palavra);
}

