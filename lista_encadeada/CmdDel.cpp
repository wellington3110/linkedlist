#include "CmdDel.h"
#include "MessageEnum.h"
#include "InputControl.h"

void CmdDel::execute(Data& d, UserInterface& ui)
{
   int pos= 0;
   ui.showMessage(MessageEnum::POS);
   if (InputControl::validateInput(pos)) {
      ( d.getChosenList().del(pos) ? ui.showMessage(MessageEnum::DEL) : ui.showMessage(MessageEnum::N_DEL) );
   }
};



