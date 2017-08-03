#include "CmdForAll.h"
#include "MessageEnum.h"

void CmdForAll::execute(Data& d, UserInterface& ui)
{
   d.getChosenList().forAll();
   ui.showMessage(MessageEnum::ENDL);
};



