#pragma once
#ifndef INCLUDED_CMDADD_H
#define INCLUDED_CMDADD_H

#include "CmdInterface.h"

class CmdAdd : public CmdInterface
{
public:
   CmdAdd(){};
   void execute(Data& d, UserInterface& ui);
};

#endif

