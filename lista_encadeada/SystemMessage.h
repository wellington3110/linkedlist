#pragma once
#ifndef SYSTEMMESSAGE_H
#define SYSTEMMESSAGE_H

#include<map>

class SystemMessage
{
public:
   ~SystemMessage(){};
   SystemMessage(){ createMessage(); };

   std::string getMessage(int m) const;
   enum message {ADICIONADO, N_ADICIONADO, DELETADO, N_DELETADO, LISTA_VAZIA, VALOR_INVALIDO, POSICAO, VALOR, VOLTAR_MPRINCIPAL, OPCAO, NUM_ELEMENTOS};

private:
   mutable std::map<int, std::string> message;

   void createMessage();
};

#endif SYSTEMMESSAGE_H

