#pragma once
#ifndef INCLUDED_CMDINTERFACE_H
#define INCLUDED_CMDINTERFACE_H

#include "Data.h"
#include "UserInterface.h"

class CmdInterface
{
public:
   virtual ~CmdInterface();
   virtual void execute(Data& d, UserInterface& ui)= 0;
};

#endif