/*
 * 
 * Autor......................: Jonas Henrique Nascimento
 * Nickname...................: W8jonas
 * Data de inicio.............: 30/12/2018
 * Ultima alteração do sketch.: 30/12/2018
 * 
*/

#include <SmartPrint.h>

SmartPrint console(115200);

void setup() {

}

void loop() {
  console.show("Hello World!", 500);
  
}
