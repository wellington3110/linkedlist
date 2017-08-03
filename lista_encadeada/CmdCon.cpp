#include "CmdCon.h"
#include "MessageEnum.h"

void CmdCon::execute(Data& d, UserInterface& ui)
{
   ( d.getChosenList().con(d.getNotChosenList()) ? ui.showMessage(d.getChosenList().forAll()) : ui.showMessage(MessageEnum::N_CON) ); 
};

