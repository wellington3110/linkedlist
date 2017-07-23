#include<iostream>
#include"ListaEncadeada.h"
#include <stdlib.h>
#include <string>

using namespace std;

enum primeiroMenu{LISTA1 = 1, LISTA2, EXIBIR_COMANDOS, LIMPAR_TELA=90, SAIR= 99};
enum menuLista{ADD = 1, ADD_POS, DEL_POS, DEL_INI, DEL_FIM, LISTA_PELO_INICIO, LISTA_PELO_FIM,
   ORDENA, CONCATENA, LIMPA_LISTA};

void iniciarPrograma();
void finalizarPrograma();

void carregarMensagemSegundoMenu();
void carregarMensagemPrimeiroMenu();

void escolherOpcaoSegundoMenu(int & opcao, ListaEncadeada & escolhida, ListaEncadeada & naoEscolhida);
void escolherOpcaoPrimeiroMenu(int & opcao);

int main()
{     
   system("tasklist /fi \"IMAGENAME eq lista_encadeada.exe\"");
   iniciarPrograma();
   system("tasklist /fi \"IMAGENAME eq lista_encadeada.exe\"");
}


void iniciarPrograma(){



   ListaEncadeada * lista1= new ListaEncadeada();
   ListaEncadeada * lista2= new ListaEncadeada();
      
   ListaEncadeada escolhida;
   ListaEncadeada naoEscolhida;

   int opcao= 0;

   do{
      carregarMensagemPrimeiroMenu();
      escolherOpcaoPrimeiroMenu(opcao);

      if(opcao == LISTA1 || opcao == LISTA2){
         if(opcao == LISTA1){
            escolhida= *lista1;
            naoEscolhida= *lista2;

         }else{
            escolhida= *lista2;
            naoEscolhida= *lista1;
         }

         do{
            carregarMensagemSegundoMenu();
            escolherOpcaoSegundoMenu(opcao, escolhida, naoEscolhida);
         }while(opcao != SAIR);

         opcao = 0;
      }
   }while(opcao != SAIR);

   delete lista1;
   delete lista2;
}

void carregarMensagemSegundoMenu(){
   cout << "-----------------------------------------------------" << endl;
   cout << "1.  Adicionar elemento" << endl;
   cout << "2.  Adicionar elemento na posição" << endl;
   cout << "3.  Deletar elemento na posição" << endl;
   cout << "4.  Deletar primeiro elemento" << endl;
   cout << "5.  Deletar último elemento" << endl;
   cout << "6.  Listar elementos a partir do inicio da lista" << endl;
   cout << "7.  Listar elementos a partir do fim da lista" << endl;
   cout << "8.  Ordernar lista" << endl;
   cout << "9.  Concatenar Listas" << endl;
   cout << "10. Limpar lista" << endl;
   cout << "90. Limpar tela" << endl;
   cout << "99. Sair da lista" << endl;
   cout << "-----------------------------------------------------" << endl << endl;;
}
void carregarMensagemPrimeiroMenu(){
   cout << "Selecione a opção desejada:" << endl;
   cout << "-----------------------------------------------------" << endl;
   cout << "1.  Configurar Lista 1" << endl;
   cout << "2.  Configurar Lista 2" << endl;
   cout << "3.  Exibir operações disponíveis" << endl;
   cout << "90. Limpar tela" << endl;
   cout << "99. Sair" << endl;
   cout << "-----------------------------------------------------" << endl << endl;;
}

void escolherOpcaoPrimeiroMenu(int & opcao){
   cout << "Opção: ";
   cin >> opcao;
   switch(opcao){
      case LISTA1:
         cout <<endl<<endl;
         break;

      case LISTA2:
         cout <<endl<<endl;
         break;

      case EXIBIR_COMANDOS:
         cout <<endl<<endl;
         carregarMensagemSegundoMenu();
         break;

      case LIMPAR_TELA:
         system("cls");
         break;

      case SAIR:
         break;

      default:
         cout << "Valor inválido" << endl << endl;
         break;
   }
}
void escolherOpcaoSegundoMenu(int & opcao, ListaEncadeada & escolhida, ListaEncadeada & naoEscolhida){
   
   int indice= 0;
   int valor= 0;
   string mensagem;

   cout << "Opção: ";
   cin >> opcao;
      switch(opcao){

      case ADD:
         cout << "Valor do elemento: ";
         cin >> valor;
         escolhida.add(valor) ? mensagem="Elemento adicionado" : mensagem="Erro ao adicionar";
         cout << endl << endl;
         break;

      case ADD_POS:
         cout << "Posição: ";
         cin >> indice;
         cout << "Valor do elemento: ";
         cin >> valor;
         escolhida.add(indice, valor) ? mensagem="Elemento adicionado" : mensagem="Erro ao adicionar";
         cout << endl << endl;
         break;

      case DEL_POS:
         cout << "Posição: ";
         cin >> indice;
         escolhida.del(indice) ? mensagem="Elemento removido" : mensagem="Erro ao remover";
         cout << endl << endl;
         break;

      case DEL_INI:
         escolhida.delFirst() ? mensagem="Elemento removido" : mensagem="Erro ao remover";
         cout << endl << endl;
         break;

      case DEL_FIM:
         escolhida.delLast() ? mensagem="Elemento removido" : mensagem="Erro ao remover";
         cout << endl << endl;
         break;

      case LISTA_PELO_INICIO:
         escolhida.forAll();
         cout << endl << endl;
         break;

      case LISTA_PELO_FIM:
         escolhida.forAllEnd();
         cout << endl << endl;
         break;

      case CONCATENA:
         escolhida.sort();
         cout << "Ordenamento realizado" << endl << endl;
         break;

      case LIMPA_LISTA:
         escolhida.delAll();
         cout << "Todos os elementos foram excluidos" << endl << endl;
         break;

      case LIMPAR_TELA:
         system("cls");
         break;

      case SAIR:
         cout << "Voltando ao menu principal" << endl << endl;
         break;

      default:
         cout << "Valor inválido" << endl;
         break;
   }
}
