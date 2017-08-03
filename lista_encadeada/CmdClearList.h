#pragma once
#ifndef INCLUDED_CmdClearList_H
#define INCLUDED_CmdClearList_H
#include "CmdInterface.h"

class CmdClearList : public CmdInterface
{
public:
   ~CmdClearList(){};
   CmdClearList(){};
   void execute(Data& d, UserInterface& ui);
};

#endif

