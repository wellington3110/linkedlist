#include "CmdAddPos.h"
#include "MessageEnum.h"
#include "InputControl.h"

void CmdAddPos::execute(Data& d, UserInterface& ui)
{
   int pos= 0;
   int value= 0;
   ui.showMessage(MessageEnum::POS);
   if (InputControl::validateInput(pos)) {
      ui.showMessage(MessageEnum::VALUE);
      if (InputControl::validateInput(value)) {
         ( d.getChosenList().add(pos, value) ? ui.showMessage(MessageEnum::ADD) : ui.showMessage(MessageEnum::N_ADD) );  
      }
   }
}



