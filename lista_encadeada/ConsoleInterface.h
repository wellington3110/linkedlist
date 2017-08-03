#pragma once
#ifndef INCLUDED_CONSOLEINTERFACE_H
#define INCLUDED_CONSOLEINTERFACE_H

#include "UserInterface.h"
class SystemMessage;

class ConsoleInterface : public UserInterface
{
public:
   ~ConsoleInterface();
   ConsoleInterface();

   void displayMainMenu();
   void displayListMenu();

   int getMainMenuOption();
   int getListMenuOption();

   void clearDisplay();
   void showMessage(int m);
   void showMessage(std::string m);

private:
   SystemMessage* message;

   int optionListMenu;
   int optionMainMenu;
   bool doInput(int& input, int m);

   void showChosenList();
};

#endif

