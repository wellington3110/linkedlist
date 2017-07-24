#include "GerenciadorSistema.h"


GerenciadorSistema::GerenciadorSistema(void)
{
}


GerenciadorSistema::~GerenciadorSistema(void)
{
}

void GerenciadorSistema::iniciarPrograma(){

   ListaEncadeada * lista1= new ListaEncadeada();
   ListaEncadeada * lista2= new ListaEncadeada();
   
   gerarMensagens();
   ListaEncadeada * escolhida;
   ListaEncadeada * naoEscolhida;
   string listaEscolhida;

   int opcao= 0;

   do{
      carregarMensagemPrimeiroMenu();
      escolherOpcaoPrimeiroMenu(opcao);

      if(opcao == LISTA1 || opcao == LISTA2){
         if(opcao == LISTA1){
            escolhida= lista1;
            naoEscolhida= lista2;
            listaEscolhida= "Lista 1";

         }else{
            escolhida= lista2;
            naoEscolhida= lista1;
            listaEscolhida= "Lista 2";
         }

         do{
            cout << listaEscolhida<< mensagens[NUM_ELEMENTOS] << escolhida->getSize() << endl;
            carregarMensagemSegundoMenu();
            escolherOpcaoSegundoMenu(opcao, *escolhida, *naoEscolhida);
         }while(opcao != SAIR);

         opcao = 0;
      }
   }while(opcao != SAIR);

   delete lista1;
   delete lista2;
}

void GerenciadorSistema::gerarMensagens(){
   mensagens[ADICIONADO]= "Elemento adicionado";
   mensagens[N_ADICIONADO]= "Erro ao adicionar";
   mensagens[DELETADO]= "Elemento deletado";
   mensagens[N_DELETADO] = "Erro ao remover";
   mensagens[LISTA_VAZIA]= "A lista está vazia";
   mensagens[VALOR_INVALIDO]= "Valor inválido";
   mensagens[INDICE]= "Indice: ";
   mensagens[VALOR]= "Valor: ";
   mensagens[VOLTAR_MPRINCIPAL] = "Voltar ao menu principal";
   mensagens[OPCAO] = "Opção: ";
   mensagens[NUM_ELEMENTOS] = "   Número de elementos: ";
}
void GerenciadorSistema::limparBufferDeEntrada(){
   cin.clear();
   cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   
}

void GerenciadorSistema::carregarMensagemSegundoMenu(){
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
void GerenciadorSistema::carregarMensagemPrimeiroMenu(){
   cout << "Selecione a opção desejada:" << endl;
   cout << "-----------------------------------------------------" << endl;
   cout << "1.  Configurar Lista 1" << endl;
   cout << "2.  Configurar Lista 2" << endl;
   cout << "3.  Exibir operações disponíveis" << endl;
   cout << "90. Limpar tela" << endl;
   cout << "99. Sair" << endl;
   cout << "-----------------------------------------------------" << endl << endl;;
}

void GerenciadorSistema::escolherOpcaoPrimeiroMenu(int & opcao){
   cout << mensagens[OPCAO];
   cin >> opcao;
   if(validarEntrada()){
      cout <<endl;
      switch(opcao){
         case LISTA1:
            break;

         case LISTA2:
            break;

         case EXIBIR_COMANDOS:
            carregarMensagemSegundoMenu();
            break;

         case LIMPAR_TELA:
            system("cls");
            break;

         case SAIR:
            break;

         default:
            cout << mensagens[VALOR_INVALIDO] << endl;
            break;
      }
      limparBufferDeEntrada();
   }
}
void GerenciadorSistema::escolherOpcaoSegundoMenu(int & opcao, ListaEncadeada & escolhida, ListaEncadeada & naoEscolhida){
   
   int indice= 0;
   int valor= 0;
   string log;
   cout << mensagens[OPCAO];
   cin >> opcao;
   if(validarEntrada()){
      cout << endl;

         switch(opcao){

         case ADD:
            if(validarEntrada(valor)){
               escolhida.add(valor) ? log= mensagens[ADICIONADO] : log= mensagens[N_ADICIONADO];
               cout << log << endl << endl;
            }
            break;

         case ADD_POS:
            if(validarEntrada(indice, valor, opcao)){
               escolhida.add(indice, valor) ? log= mensagens[ADICIONADO] : log= mensagens[N_ADICIONADO];
               cout << log << endl << endl;
            }
            break;

         case DEL_POS:
            if(!escolhida.isEmpty()){
               if(validarEntrada(indice, valor, opcao)){
                  escolhida.del(indice) ? log= mensagens[DELETADO] : log= mensagens[N_DELETADO];
                  cout << log << endl << endl;
               }
            } else {
               cout << mensagens[LISTA_VAZIA] << endl << endl;
            }
            break;

         case DEL_INI:
            if(!escolhida.isEmpty()){
               escolhida.delFirst() ? log= mensagens[DELETADO] : log= mensagens[N_DELETADO];
               cout << log << endl << endl;
            } else {
               cout << mensagens[LISTA_VAZIA] << endl << endl;
            }
            break;

         case DEL_FIM:
            if(!escolhida.isEmpty()){
               escolhida.delLast() ? log= mensagens[DELETADO] : log= mensagens[N_DELETADO];
               cout << log << endl;
            } else {
               cout << mensagens[LISTA_VAZIA] << endl << endl;
            }
            break;

         case LISTA_PELO_INICIO:
            escolhida.forAll();
            cout << endl;
            break;

         case LISTA_PELO_FIM:
            escolhida.forAllEnd();
            cout << endl;
            break;
      
         case ORDENA:
            escolhida.sort();
            escolhida.forAll();
            cout << endl;
            break;

         case CONCATENA:
            escolhida.con(naoEscolhida);
            escolhida.forAll();
            cout << endl;
            break;

         case LIMPA_LISTA:
            escolhida.delAll();
            escolhida.forAll();
            cout << endl;
            break;

         case LIMPAR_TELA:
            system("cls");
            break;

         case SAIR:
            cout << mensagens[VOLTAR_MPRINCIPAL] << endl << endl;
            break;

         default:         
            cout << mensagens[VALOR_INVALIDO] << endl << endl;
            break;
      }
         limparBufferDeEntrada();
   }
}                              

bool GerenciadorSistema::validarEntrada(){
   if(cin.fail()){
      cout << mensagens[VALOR_INVALIDO] << endl << endl;
      limparBufferDeEntrada();
      return false;
   }
   return true;
}
bool GerenciadorSistema::validarEntrada(int & valor){
   cout << mensagens[VALOR];
   cin >> valor;
   if(cin.fail()){
      cout << mensagens[VALOR_INVALIDO] << endl << endl;
      return false;
   }
   return true;
}
bool GerenciadorSistema::validarEntrada(int & indice, int & valor, int & opcao){
   cout << mensagens[INDICE];
   cin >> indice;
   if(cin.fail()){
      cout << mensagens[VALOR_INVALIDO] << endl << endl;
      return false;
   } else if(opcao == ADD_POS){
      return validarEntrada(valor);
   }
}


