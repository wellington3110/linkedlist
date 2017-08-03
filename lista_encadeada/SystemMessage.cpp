#include "SystemMessage.h"
#include "MessageEnum.h"
#include <iostream>

void SystemMessage::createMessage()
{
   message[MessageEnum::ADD]= "Elemento adicionado\n\n";
   message[MessageEnum::N_ADD]= "Erro ao adicionar\n\n";
   message[MessageEnum::DEL]= "Elemento deletado\n\n";
   message[MessageEnum::N_DEL]= "Erro ao remover\n\n";
   message[MessageEnum::EMPTY_LIST]= "A lista est� vazia\n\n";
   message[MessageEnum::INVALID_VALUE]= "Valor inv�lido\n\n";
   message[MessageEnum::POS]= "Posi��o: ";
   message[MessageEnum::VALUE]= "Valor: ";
   message[MessageEnum::BACK_MAINMENU]= "Voltando ao menu principal\n\n";
   message[MessageEnum::OPTION]= "Op��o: ";
   message[MessageEnum::NUM_ELEMNT]= "   N�mero de elementos: ";
   message[MessageEnum::N_SORT]= "Lista j� foi ordenada ou est� vazia\n\n";
   message[MessageEnum::N_CON]= "A outra lista est� vazia\n\n";
   message[MessageEnum::ENDL]= "\n";
}
std::string SystemMessage::getMessage(int m)
{ 
   return message[m];
}

