#include "CmdAdd.h"
#include "MessageEnum.h"

void CmdAdd::execute(Data& d, UserInterface& ui)
{
   int value= 0;
   if (ui.doInput(value, MessageEnum::VALUE)) {
      ( d.getChosenList().add(value) ? ui.showMessage(MessageEnum::ADD) : ui.showMessage(MessageEnum::N_ADD) );
   } 
   else
      ui.showMessage(MessageEnum::INVALID_VALUE);
};

