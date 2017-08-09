#pragma once
#ifndef INCLUDED_CMDDELLAST_H
#define INCLUDED_CMDDELLAST_H

#include "CmdInterface.h"

class CmdDelLast : public CmdInterface 
{
public:
   CmdDelLast() {};
   void execute(Data& d, UserInterface& ui);
};
#endif

