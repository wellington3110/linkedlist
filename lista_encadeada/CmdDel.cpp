#include "CmdDel.h"
#include "MessageEnum.h"

void CmdDel::execute(Data& d, UserInterface& ui)
{
   int pos= 0;
   if (ui.doInput(pos, MessageEnum::POS)) {
      ( d.getChosenList().del(pos) ? ui.showMessage(MessageEnum::DEL) : ui.showMessage(MessageEnum::N_DEL) );
   }
   else
      ui.showMessage(MessageEnum::INVALID_VALUE);
};



