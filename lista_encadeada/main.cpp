#include <stdlib.h>
#include <locale.h>
#include "GerenciadorSistema.h"
#include <crtdbg.h>

using namespace std;

_CrtMemState s1;
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
   _CrtMemCheckpoint(&s1);
   _CrtMemDumpStatistics( &s1);
}



