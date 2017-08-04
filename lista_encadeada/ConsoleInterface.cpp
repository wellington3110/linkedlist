#include "ConsoleInterface.h"
#include "InputControl.h"

ConsoleInterface::~ConsoleInterface()
{
   delete messageControl;
}

ConsoleInterface::ConsoleInterface()
{
   messageControl= new TextMessage();   

   listMenu.push_back(MyMenuItem(89,TextMessage::DOTTED_LINE));
   listMenu.push_back(MyMenuItem(1,TextMessage::OPT_ADD));
   listMenu.push_back(MyMenuItem(2,TextMessage::ADD_POS));
   listMenu.push_back(MyMenuItem(3,TextMessage::DEL_POS));
   listMenu.push_back(MyMenuItem(4,TextMessage::DEL_BEG));
   listMenu.push_back(MyMenuItem(5,TextMessage::DEL_LAST));
   listMenu.push_back(MyMenuItem(6,TextMessage::FOR_ALL));
   listMenu.push_back(MyMenuItem(7,TextMessage::FOR_ALL_END));
   listMenu.push_back(MyMenuItem(8,TextMessage::SORT));
   listMenu.push_back(MyMenuItem(9,TextMessage::CON));
   listMenu.push_back(MyMenuItem(10,TextMessage::CLEAR_LIST));
   listMenu.push_back(MyMenuItem(90,TextMessage::CLS));
   listMenu.push_back(MyMenuItem(99,TextMessage::EXIT));
   listMenu.push_back(MyMenuItem(89,TextMessage::DOTTED_LINE));
   
   mainMenu.push_back(MyMenuItem(0,TextMessage::TITLE));
   mainMenu.push_back(MyMenuItem(89,TextMessage::DOTTED_LINE));
   mainMenu.push_back(MyMenuItem(11,TextMessage::LIST1));
   mainMenu.push_back(MyMenuItem(12,TextMessage::LIST2));
   mainMenu.push_back(MyMenuItem(13,TextMessage::SHOW_LISTMENU));
   mainMenu.push_back(MyMenuItem(90,TextMessage::CLS));
   mainMenu.push_back(MyMenuItem(99,TextMessage::EXIT));
   mainMenu.push_back(MyMenuItem(89,TextMessage::DOTTED_LINE));
}

/////////////////////////////////////////////////////////

int ConsoleInterface::getMainMenuOption()
{
   displayMainMenu();
   return doInput(optionMainMenu, TextMessage::OPTION) ? optionMainMenu : -1;
}

int ConsoleInterface::getListMenuOption()
{
   displayListMenu();
   return doInput(optionListMenu, TextMessage::OPTION) ? optionListMenu : -1;
}

bool ConsoleInterface::doInput(int& input, TextMessage::TxtMessageId m)
{
   showMessage(m);
   if (InputControl::validateInput(input)) 
      return true;      
   return false;
}

/////////////////////////////////////////////////////////

void ConsoleInterface::clearDisplay()
{
   std::system("cls");
}

void ConsoleInterface::displayMainMenu()
{
   for (int i= 0; i < mainMenu.size(); i++) {
      std::cout << messageControl->getTextForOptions(mainMenu[i].valueEnum);
   }
}

void ConsoleInterface::displayListMenu()
{
   if (optionMainMenu == TextMessage::LIST1)
       std::cout << messageControl->getTextForOptions(TextMessage::CHOSEN_LIST1);
   else
       std::cout << messageControl->getTextForOptions(TextMessage::CHOSEN_LIST2);

   for (int i= 0; i < listMenu.size(); i++) {
      std::cout << messageControl->getTextForOptions(listMenu[i].valueEnum);
   }
}






