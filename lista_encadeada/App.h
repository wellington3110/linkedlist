#pragma once
#ifndef INCLUDED_APP_H
#define INCLUDED_APP_H

#include "UserInterface.h"
#include "Data.h"
#include "CmdInterface.h"

class App
{
public:
   ~App();
   App();

   void run();

private:  
   Data* d;
   UserInterface* ui;
   CmdInterface* cActual;

   bool cmdExecute(int menuOption);

};

#endif
