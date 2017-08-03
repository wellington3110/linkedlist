#pragma once
#ifndef INCLUDED_CMDFORALLEND_H
#define INCLUDED_CMDFORALLEND_H
#include "CmdInterface.h"

class CmdForAllEnd : public CmdInterface 
{
public:
   ~CmdForAllEnd(){};
   CmdForAllEnd(){};
   void execute(Data& d, UserInterface& ui);

};
#endif

