#include "CmdForAll.h"
#include "MessageEnum.h"

void CmdForAll::execute(Data& d, UserInterface& ui)
{
   ui.showMessage(d.getChosenList().forAll());
};



