/*
 * 
 * Autor......................: Jonas Henrique Nascimento
 * Nickname...................: W8jonas
 * Data de inicio.............: 30/12/2018
 * Ultima alteração do sketch.: 31/12/2018
 * 
*/

#include "Arduino.h"
#include "SmartPrint.h"

Smart_Print::Smart_Print(unsigned long delay_pos_print){
    _delay_pos_print = delay_pos_print;
}

void Smart_Print::Speed_comunication(unsigned long bound_rate){
   Serial.begin(bound_rate);
}

void Smart_Print::show(String palavra, long palavra_2, unsigned long bound_rate){
   Serial.begin(bound_rate);
   
   if (palavra_2 != _palavra_2) {
      Serial.print(palavra);
	  Serial.print(palavra_2);
	  delay(_delay_pos_print);
   }
   _palavra_2 = palavra_2;
}

void Smart_Print::show(String palavra, long palavra_2){
   if (palavra_2 != _palavra_2) {
      Serial.print(palavra);
	  Serial.print(palavra_2);
	  delay(_delay_pos_print);
   }
   _palavra_2 = palavra_2;
}

void Smart_Print::show(String palavra){
   
   if(_palavra != palavra) Serial.println(palavra);
   delay(_delay_pos_print);
   _palavra = palavra;
}

