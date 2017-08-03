#include "SystemMessage.h"
#include "MessageEnum.h"
#include <iostream>

void SystemMessage::createMessage()
{
   message[MessageEnum::ADD]= "Elemento adicionado\n\n";
   message[MessageEnum::N_ADD]= "Erro ao adicionar\n\n";
   message[MessageEnum::DEL]= "Elemento deletado\n\n";
   message[MessageEnum::N_DEL]= "Erro ao remover\n\n";
   message[MessageEnum::EMPTY_LIST]= "A lista está vazia\n\n";
   message[MessageEnum::INVALID_VALUE]= "Valor inválido\n\n";
   message[MessageEnum::POS]= "Posição: ";
   message[MessageEnum::VALUE]= "Valor: ";
   message[MessageEnum::BACK_MAINMENU]= "Voltando ao menu principal\n\n";
   message[MessageEnum::OPTION]= "Opção: ";
   message[MessageEnum::NUM_ELEMNT]= "   Número de elementos: ";
   message[MessageEnum::N_SORT]= "Lista já foi ordenada ou está vazia\n\n";
   message[MessageEnum::N_CON]= "A outra lista está vazia\n\n";
   message[MessageEnum::ENDL]= "\n";
}
std::string SystemMessage::getMessage(int m)
{ 
   return message[m];
}

