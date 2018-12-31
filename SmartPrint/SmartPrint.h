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

class SmartPrint{
   public:
      SmartPrint(int bound_rate);
      void SingularPrint(String palavra, int time_to_delay);
      void SingularPrint(String palavra);
      
   private:
      String _bound_rate;
};

void SingularPrint(String palavra, int time_to_delay);
void SingularPrint(String palavra);

#endif


