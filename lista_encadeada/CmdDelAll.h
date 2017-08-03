#pragma once
#ifndef INCLUDED_CMDDELALL_H
#define INCLUDED_CMDDELALL_H
#include "CmdInterface.h"

class CmdDelAll : public CmdInterface 
{
public:  
   ~CmdDelAll();
   CmdDelAll();
   void execute(Data& d, UserInterface& ui);
};
#endif

