#include "CmdDelLast.h"

void CmdDelLast::execute(Data& d, UserInterface& ui)
{
   TextMessage::TxtMessageId statusMsg= TextMessage::EMPTY_LIST;

   if ( !d.getChosenList().isEmpty() )
      statusMsg= d.getChosenList().delLast() ? TextMessage::DEL : TextMessage::N_DEL;

   ui.showMessage(statusMsg);
}



