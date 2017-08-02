#include "SystemMessage.h"

void SystemMessage::createMessage()
{
   message[ADICIONADO]= "Elemento adicionado";
   message[N_ADICIONADO]= "Erro ao adicionar";
   message[DELETADO]= "Elemento deletado";
   message[N_DELETADO] = "Erro ao remover";
   message[LISTA_VAZIA]= "A lista está vazia";
   message[VALOR_INVALIDO]= "Valor inválido";
   message[POSICAO]= "Posição: ";
   message[VALOR]= "Valor: ";
   message[VOLTAR_MPRINCIPAL] = "Voltar ao menu principal";
   message[OPCAO] = "Opção: ";
   message[NUM_ELEMENTOS] = "   Número de elementos: ";
}

std::string SystemMessage::getMessage(int m) const
{
   return message[m];
}

