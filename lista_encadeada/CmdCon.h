#pragma once
#ifndef INCLUDED_CMDCON_H
#define INCLUDED_CMDCON_H
#include "CmdInterface.h"

class CmdCon : public CmdInterface 
{
public:
   ~CmdCon(){};
   CmdCon(){};
   void execute(Data& d, UserInterface& ui);
};

#endif

