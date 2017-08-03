#include "CmdSort.h"
#include "MessageEnum.h"

void CmdSort::execute(Data& d, UserInterface& ui)
{
   ( d.getChosenList().sort() ? ui.showMessage(d.getChosenList().forAll()) : ui.showMessage(MessageEnum::N_SORT) );  
};



