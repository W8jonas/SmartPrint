/*
 * 
 * Autor......................: Jonas Henrique Nascimento
 * Nickname...................: W8jonas
 * Data de inicio.............: 30/12/2018
 * Ultima alteração do sketch.: 30/12/2018
 * 
*/

#ifndef SmartPrint

#define SmartPrint

#include "Arduino.h"

class SingularPrint{
   public:
      Serial.print(String palavra);

   private:
      String _palavra;
}


#endif
