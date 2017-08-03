#include "CmdForAllEnd.h"
#include "MessageEnum.h"

void CmdForAllEnd::execute(Data& d, UserInterface& ui)
{
   ui.showMessage(d.getChosenList().forAllEnd());
};



