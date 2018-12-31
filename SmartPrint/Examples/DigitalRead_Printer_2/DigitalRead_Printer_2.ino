/*
 * 
 * Autor......................: Jonas Henrique Nascimento
 * Nickname...................: W8jonas
 * Data de inicio.............: 30/12/2018
 * Ultima alteração do sketch.: 30/12/2018
 * 
*/

#include <SmartPrint.h>

Smart_Print console(115200);

void setup() {
//Serial.begin(115200);
Speed_comunication(115200);
}

void loop() {
  
  //Serial.println("Hello e o meu cu");
  //delay(500);
  console.show("Hello World!", 500);
}



