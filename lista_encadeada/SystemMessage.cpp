#include "SystemMessage.h"

void SystemMessage::createMessage()
{
   message[ADICIONADO]= "Elemento adicionado";
   message[N_ADICIONADO]= "Erro ao adicionar";
   message[DELETADO]= "Elemento deletado";
   message[N_DELETADO] = "Erro ao remover";
   message[LISTA_VAZIA]= "A lista est� vazia";
   message[VALOR_INVALIDO]= "Valor inv�lido";
   message[POSICAO]= "Posi��o: ";
   message[VALOR]= "Valor: ";
   message[VOLTAR_MPRINCIPAL] = "Voltar ao menu principal";
   message[OPCAO] = "Op��o: ";
   message[NUM_ELEMENTOS] = "   N�mero de elementos: ";
}

std::string SystemMessage::getMessage(int m) const
{
   return message[m];
}

