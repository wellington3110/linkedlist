#pragma once
#ifndef INCLUDED_CMDSORT_H
#define INCLUDED_CMDSORT_H

#include "CmdInterface.h"

class CmdSort : public CmdInterface
{
public:
   CmdSort() {};
   void execute(Data& d, UserInterface& ui);
};
#endif

