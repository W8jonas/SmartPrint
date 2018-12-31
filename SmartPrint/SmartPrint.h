/*
 * 
 * Autor......................: Jonas Henrique Nascimento
 * Nickname...................: W8jonas
 * Data de inicio.............: 30/12/2018
 * Ultima alteração do sketch.: 31/12/2018
 * 
*/

#ifndef SmartPrint_n
#define SmartPrint_n
#include "Arduino.h"

class Smart_Print{
   public:
      Smart_Print(unsigned long bound_rate);
	  void Speed_comunication(unsigned long bound_rate_2);
	  void show(String palavra, int time_to_delay, unsigned long bound_rate_2);
      void show(String palavra, int time_to_delay);
      void show(String palavra);
      
   private:
      unsigned long _bound_rate;
};

#endif

