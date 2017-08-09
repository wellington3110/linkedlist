#include "CmdCon.h"

void CmdCon::execute(Data& d, UserInterface& ui)
{
    d.getChosenList().con(d.getNotChosenList()) ? 
       ui.showMessage(d.getChosenList().forAll()) : ui.showMessage(TextMessage::N_CON); 
}

