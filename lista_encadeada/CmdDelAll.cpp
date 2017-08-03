#include "CmdDelAll.h"
#include "MessageEnum.h"

void CmdDelAll::execute(Data& d, UserInterface& ui)
{
   d.getChosenList().delAll();
   d.getChosenList().forAll();
};



