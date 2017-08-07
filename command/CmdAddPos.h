#pragma once
#ifndef INCLUDED_CMDADDPOS_H
#define INCLUDED_CMDADDPOS_H

#include "CmdInterface.h"

class CmdAddPos : public CmdInterface 
{
public:
   CmdAddPos() {};
   void execute(Data& d, UserInterface& ui);
   
};

#endif

