#pragma once
#ifndef INCLUDED_CmdRunMenuList_H
#define INCLUDED_CmdRunMenuList_H
#include "CmdInterface.h"

class CmdRunMenuList : public CmdInterface 
{
public:  
   ~CmdRunMenuList();
   CmdRunMenuList();
   void execute(Data& d, UserInterface& ui);
};
#endif

