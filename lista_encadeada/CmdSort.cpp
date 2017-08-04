#include "CmdSort.h"

void CmdSort::execute(Data& d, UserInterface& ui)
{
   d.getChosenList().sort() ? ui.showMessage(d.getChosenList().forAll()) : ui.showMessage(TextMessage::N_SORT);  
}



