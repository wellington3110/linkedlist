#include "CmdAddPos.h"

void CmdAddPos::execute(Data& d, UserInterface& ui)
{
   int pos= 0;
   int value= 0;
   TextMessage::TxtMessageId statusMsg= TextMessage::INVALID_VALUE;
   
   if (ui.doInput(pos, TextMessage::POS)) {
      if (ui.doInput(value, TextMessage::VALUE))
         statusMsg= d.getChosenList().add(pos, value) ? TextMessage::ADD : TextMessage::N_ADD;  
   }

   ui.showMessage(statusMsg);
}



