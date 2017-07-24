#include<iostream>
#include <stdlib.h>
#include <string>
#include <locale.h>
#include "GerenciadorSistema.h"

using namespace std;

void exibirMemoriaUsada();

int main()
{     
   setlocale(LC_ALL, "Portuguese");
   exibirMemoriaUsada();

   GerenciadorSistema * gerenciador = new GerenciadorSistema();
   gerenciador->iniciarPrograma();
   delete gerenciador;
   exibirMemoriaUsada();
   return 0;
}

void exibirMemoriaUsada(){
  system("tasklist /fi \"IMAGENAME eq lista_encadeada.exe\"");
  cout << endl;
}



