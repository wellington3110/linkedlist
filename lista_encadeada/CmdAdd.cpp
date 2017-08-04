#include "CmdAdd.h"

void CmdAdd::execute(Data& d, UserInterface& ui)
{
   int value= 0;
   TextMessage::TxtMessageId statusMsg= TextMessage::INVALID_VALUE;

   if (ui.doInput(value, TextMessage::VALUE)) 
      statusMsg= d.getChosenList().add(value) ? TextMessage::ADD : TextMessage::N_ADD;

   ui.showMessage(statusMsg);
}

