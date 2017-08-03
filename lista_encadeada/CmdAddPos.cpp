#include "CmdAddPos.h"
#include "MessageEnum.h"

void CmdAddPos::execute(Data& d, UserInterface& ui)
{
   int pos= 0;
   int value= 0;
   if (ui.doInput(pos, MessageEnum::POS)) {
      if (ui.doInput(value, MessageEnum::VALUE)) {
         ( d.getChosenList().add(pos, value) ? ui.showMessage(MessageEnum::ADD) : ui.showMessage(MessageEnum::N_ADD) );  
      }
      else
         ui.showMessage(MessageEnum::INVALID_VALUE);
   }
}



