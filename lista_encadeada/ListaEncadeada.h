#pragma once
#include "Elemento.h"

class ListaEncadeada
{
public:
   ~ListaEncadeada(void);
   ListaEncadeada(void);

   bool add(int valor);
   bool add(int indice, int valor);

   bool delAll();
   bool delLast();
   bool delFirst();
   bool del(int indice);

   bool set(int indice, int valor);

   bool isEmpty();
   
   int getSize();
   int get(int indice);  

   void forAll();
   void forAllEnd();

   void con(ListaEncadeada &novaLista);

   void sort();

private:
   Elemento *ultimo;
   Elemento *primeiro;
   int size;

   bool addFirst(int valor);
   bool addLast(int valor);

   Elemento * pegarElemento(int indice);
};

