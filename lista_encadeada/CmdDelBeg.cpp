#include "CmdDelBeg.h"
#include "MessageEnum.h"

void CmdDelBeg::execute(Data& d, UserInterface& ui)
{
   if ( !d.getChosenList().isEmpty() ) {
      ( d.getChosenList().delFirst() ? ui.showMessage(MessageEnum::DEL) : ui.showMessage(MessageEnum::N_DEL) );   
   } else {
      ui.showMessage(MessageEnum::EMPTY_LIST);
   }
};



