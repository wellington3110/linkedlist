#include "CmdForAllEnd.h"

void CmdForAllEnd::execute(Data& d, UserInterface& ui)
{
   ui.showMessage(d.getChosenList().forAllEnd());
}



