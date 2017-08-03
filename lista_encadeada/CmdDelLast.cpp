#include "CmdDelLast.h"
#include "MessageEnum.h"

void CmdDelLast::execute(Data& d, UserInterface& ui)
{
   if ( !d.getChosenList().isEmpty() ) {
      ( d.getChosenList().delLast() ? ui.showMessage(MessageEnum::DEL) : ui.showMessage(MessageEnum::N_DEL) );   
   } else {
      ui.showMessage(MessageEnum::EMPTY_LIST);
   }
};



