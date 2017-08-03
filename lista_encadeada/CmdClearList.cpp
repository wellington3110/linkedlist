#include "CmdClearList.h"
#include "MessageEnum.h"

void CmdClearList::execute(Data& d, UserInterface& ui)
{
   d.getChosenList().delAll();
   d.getChosenList().forAll();
   ui.showMessage(MessageEnum::ENDL);
}



