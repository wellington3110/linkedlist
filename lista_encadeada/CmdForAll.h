#pragma once
#ifndef INCLUDED_CMDFORALL_H
#define INCLUDED_CMDFORALL_H
#include "CmdInterface.h"

class CmdForAll : public CmdInterface 
{
public:
   CmdForAll() {};
   void execute(Data& d, UserInterface& ui);
};
#endif

