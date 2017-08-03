#include "CmdForAllEnd.h"
#include "MessageEnum.h"

void CmdForAllEnd::execute(Data& d, UserInterface& ui)
{
   d.getChosenList().forAllEnd();
   ui.showMessage(MessageEnum::ENDL);
};



