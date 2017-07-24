#pragma once
#include "ListaEncadeada.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

class GerenciadorSistema
{
public:
    ~GerenciadorSistema(void);
   GerenciadorSistema(void); 

   enum primeiroMenu{LISTA1 = 1, LISTA2, EXIBIR_COMANDOS, LIMPAR_TELA=90, SAIR= 99};
   enum menuLista{ADD = 1, ADD_POS, DEL_POS, DEL_INI, DEL_FIM, LISTA_PELO_INICIO, LISTA_PELO_FIM, ORDENA, CONCATENA, LIMPA_LISTA};
   enum mensagens {ADICIONADO, N_ADICIONADO, DELETADO, N_DELETADO, LISTA_VAZIA, VALOR_INVALIDO, INDICE, VALOR, VOLTAR_MPRINCIPAL, OPCAO, NUM_ELEMENTOS}; 

   void iniciarPrograma();

private:   
   std::map<int,string> mensagens;

   void gerarMensagens();
   void limparBufferDeEntrada();
   void carregarMensagemSegundoMenu();
   void carregarMensagemPrimeiroMenu();
   void escolherOpcaoPrimeiroMenu(int & opcao);
   void escolherOpcaoSegundoMenu(int & opcao, ListaEncadeada & escolhida, ListaEncadeada & naoEscolhida);

   bool validarEntrada();
   bool validarEntrada(int & valor);
   bool validarEntrada(int & indice, int & valor, int & opcao);
   
};

