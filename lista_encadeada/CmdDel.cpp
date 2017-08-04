#include "CmdDel.h"

void CmdDel::execute(Data& d, UserInterface& ui)
{
   int pos= 0;
   TextMessage::TxtMessageId statusMsg= TextMessage::INVALID_VALUE;
   
   if (ui.doInput(pos, TextMessage::POS))
      statusMsg= d.getChosenList().del(pos) ? TextMessage::DEL : TextMessage::N_DEL;
   
   ui.showMessage(statusMsg);
}



