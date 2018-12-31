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
      Smart_Print(unsigned long delay_pos_print);
	  void Speed_comunication(unsigned long bound_rate);
	  
	  void show(String palavra, long palavra_2, 
								unsigned long bound_rate);
      void show(String palavra, long palavra_2);
      void show(String palavra);
      
   private:
      String _palavra;
	  long _palavra_2;
	  unsigned long _delay_pos_print;
};

#endif

