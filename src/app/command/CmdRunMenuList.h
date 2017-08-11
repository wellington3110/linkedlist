#pragma once
#ifndef INCLUDED_CmdRunMenuList_H
#define INCLUDED_CmdRunMenuList_H

#include "CmdInterface.h"

class CmdRunMenuList : public CmdInterface 
{
public:  
   CmdRunMenuList() {cActual= nullptr;};
   void execute(Data& d, UserInterface& ui);

private:
   CmdInterface* cActual;

   CmdInterface* createCmd(int menuOption, UserInterface& ui);
   bool cmdExecute(int menuOption, Data& d, UserInterface& ui);
};
#endif

