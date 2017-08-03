#include "CmdCon.h"
#include "MessageEnum.h"

void CmdCon::execute(Data& d, UserInterface& ui)
{
   if (d.getChosenList().con( d.getNotChosenList() ) ) {
      d.getChosenList().forAll();
      ui.showMessage(MessageEnum::ENDL);
   }
   else  
      ui.showMessage(MessageEnum::N_CON);
};

