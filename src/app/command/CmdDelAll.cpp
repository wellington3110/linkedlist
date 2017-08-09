#include "CmdDelAll.h"

void CmdDelAll::execute(Data& d, UserInterface& ui)
{
   d.getChosenList().delAll() ? ui.showMessage(d.getChosenList().forAll()) : ui.showMessage(TextMessage::EMPTY_LIST);
}



