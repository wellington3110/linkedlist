#pragma once
#ifndef INCLUDED_CMDIDLE_H
#define INCLUDED_CMDIDLE_H
#include "CmdInterface.h"

class CmdIdle : public CmdInterface
{
public:
   ~CmdIdle(){};
   CmdIdle(){};
   void execute(Data& d, UserInterface& ui);
};

#endif

