#pragma once
#ifndef CONSOLEINTERFACE_H
#define CONSOLEINTERFACE_H

#include "UserInterface.h"
class SystemMessage;

class ConsoleInterface : public UserInterface
{
public:
   ~ConsoleInterface();
   ConsoleInterface();

   void displayMainMenu() const;
   void displayListMenu() const;
   int getMainMenu() const;
   int getListMenu() const;
   std::string getMessage(int m) const;

private:
   SystemMessage* message;
};

#endif

