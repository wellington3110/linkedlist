#pragma once
#ifndef INCLUDED_CONSOLEINTERFACE_H
#define INCLUDED_CONSOLEINTERFACE_H

#include <vector>
#include "UserInterface.h"
#include <iostream>

class ConsoleInterface : public UserInterface
{
   struct MyMenuItem {
      int valueOption;
      TextMessage::TxtOptionsId valueEnum;

      MyMenuItem(int _valueOption,TextMessage::TxtOptionsId _valueEnum)
         : valueOption(_valueOption), valueEnum(_valueEnum) {}
   };

public:
   ~ConsoleInterface();
   ConsoleInterface();

   void clearDisplay();
   void displayMainMenu();
   void displayListMenu();
   void showMessage(std::string m) { std::cout << m << std::endl; };
   void showMessage(TextMessage::TxtMessageId mId) { std::cout << messageControl->getTextForMessage(mId);};

   int getMainMenuOption();
   int getListMenuOption();
   bool doInput(int& input, TextMessage::TxtMessageId m);

private:
   TextMessage* messageControl;
   std::vector<MyMenuItem> mainMenu;
   std::vector<MyMenuItem> listMenu;

   int optionListMenu;
   int optionMainMenu;
};

#endif

