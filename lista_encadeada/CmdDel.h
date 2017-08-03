#pragma once
#ifndef INCLUDED_CMDDEL_H
#define INCLUDED_CMDDEL_H
#include "CmdInterface.h"

class CmdDel : public CmdInterface 
{
public:
   ~CmdDel();
   CmdDel();
   void execute(Data& d, UserInterface& ui);
};

#endif

