#include "CmdDelBeg.h"

void CmdDelBeg::execute(Data& d, UserInterface& ui)
{
   TextMessage::TxtMessageId statusMsg= TextMessage::EMPTY_LIST;

   if ( !d.getChosenList().isEmpty() )
      statusMsg= d.getChosenList().delFirst() ? TextMessage::DEL : TextMessage::N_DEL;
      
   ui.showMessage(TextMessage::EMPTY_LIST);
}



