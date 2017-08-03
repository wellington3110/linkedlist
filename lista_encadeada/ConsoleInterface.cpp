#include "ConsoleInterface.h"
#include "SystemMessage.h"
#include "InputControl.h"
#include "OptionEnum.h"
#include "MessageEnum.h"
#include <iostream>

ConsoleInterface::~ConsoleInterface()
{
   delete message;
}
ConsoleInterface::ConsoleInterface()
{
   message= new SystemMessage();   
}

///////////////////////////////////////////////////////////
void ConsoleInterface::showChosenList()
{
   if (optionMainMenu == OptionEnum::LIST1)
   {
      std::cout << "Lista 1" << std::endl;
   }
   else
      std::cout << "Lista 2" << std::endl;
}
int ConsoleInterface::getMainMenuOption()
{
   displayMainMenu();
   return (doInput(optionMainMenu, MessageEnum::OPTION) ? optionMainMenu : -1);
}
int ConsoleInterface::getListMenuOption()
{
   showChosenList();
   displayListMenu();
   return (doInput(optionListMenu, MessageEnum::OPTION) ? optionListMenu : -1);
}
bool ConsoleInterface::doInput(int& input, int m)
{
   showMessage(m);
   if (InputControl::validateInput(input) ) {
      return true;      
   }
   return false;
}
///////////////////////////////////////////////////////////

void ConsoleInterface::clearDisplay()
{
   std::system("cls");
}
void ConsoleInterface::displayMainMenu()
{
   std::cout << "Selecione a opção desejada:" << std::endl
   << "-----------------------------------------------------" << std::endl
   << "1.  Configurar Lista 1" << std::endl
   << "2.  Configurar Lista 2" << std::endl
   << "3.  Exibir operações disponíveis" << std::endl
   << "90. Limpar tela" << std::endl
   << "99. Sair" << std::endl
   << "-----------------------------------------------------" << std::endl << std::endl;
};
void ConsoleInterface::displayListMenu()
{
   std::cout << "-----------------------------------------------------" << std::endl
   << "1.  Adicionar elemento" << std::endl
   << "2.  Adicionar elemento na posição" << std::endl
   << "3.  Deletar elemento na posição" << std::endl
   << "4.  Deletar primeiro elemento" << std::endl
   << "5.  Deletar último elemento" << std::endl
   << "6.  Listar elementos a partir do inicio da lista" << std::endl
   << "7.  Listar elementos a partir do fim da lista" << std::endl
   << "8.  Ordernar lista" << std::endl
   << "9.  Concatenar Listas" << std::endl
   << "10. Limpar lista" << std::endl
   << "90. Limpar tela" << std::endl
   << "99. Sair da lista" << std::endl
   << "-----------------------------------------------------" << std::endl << std::endl;
};
void ConsoleInterface::showMessage(int m)
{
   std::cout << message->getMessage(m);
}
void ConsoleInterface::showMessage(std::string m)
{
   std::cout << m << std::endl;
}





