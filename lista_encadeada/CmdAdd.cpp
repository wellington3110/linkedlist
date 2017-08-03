#include "CmdAdd.h"
#include "MessageEnum.h"
#include "InputControl.h"

void CmdAdd::execute(Data& d, UserInterface& ui)
{
   int value= 0;
   ui.showMessage(MessageEnum::VALUE);
   if (InputControl::validateInput(value)) {
      ( d.getChosenList().add(value) ? ui.showMessage(MessageEnum::ADD) : ui.showMessage(MessageEnum::N_ADD) );
   }
};

