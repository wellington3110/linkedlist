#pragma once
#ifndef INCLUDED_LINKEDLIST_H
#define INCLUDED_LINKEDLIST_H
#include <sstream>

class Elemento;

class LinkedList
{
public:
   ~LinkedList(){ delAll(); };
   LinkedList() : size(0){};

   bool add(int value);
   bool add(int pos, int value);

   bool delAll();
   bool delLast();
   bool delFirst();
   bool del(int pos);

   bool sort();
   bool isEmpty();
   bool con(LinkedList &outra);
   bool set(int pos, int value);

   int getSize();
   int get(int pos);  

   std::string forAll();
   std::string forAllEnd();

private:
   int size;

   Elemento* ultimo;
   Elemento* primeiro;

   bool listaOrdenada;
   
   bool addLast(int value);
   bool addFirst(int value);

   Elemento* pegarElemento(int pos); 
};
#endif

