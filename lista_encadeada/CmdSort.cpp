#include "CmdSort.h"
#include "MessageEnum.h"

void CmdSort::execute(Data& d, UserInterface& ui)
{
   if ( d.getChosenList().sort() ) {
      d.getChosenList().forAll();
      ui.showMessage(MessageEnum::ENDL);
   } 
   else
     ui.showMessage(MessageEnum::N_SORT);  
};



