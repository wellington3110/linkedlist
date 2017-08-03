#pragma once
#ifndef INCLUDED_CMDDELBEG_H
#define INCLUDED_CMDDELBEG_H
#include "CmdInterface.h"

class CmdDelBeg : public CmdInterface 
{
public:
   ~CmdDelBeg(){};
   CmdDelBeg(){};
   void execute(Data& d, UserInterface& ui);
};
#endif

