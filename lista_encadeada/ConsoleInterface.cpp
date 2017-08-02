#include "ConsoleInterface.h"
#include "SystemMessage.h"
#include <iostream>

ConsoleInterface::~ConsoleInterface()
{
}
ConsoleInterface::ConsoleInterface()
{
}

void ConsoleInterface::displayMainMenu() const
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
void ConsoleInterface::displayListMenu() const
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

int ConsoleInterface::getMainMenu() const
{}
int ConsoleInterface::getListMenu() const
{}

std::string ConsoleInterface::getMessage(int m) const
{
   return message->getMessage(m);
}




