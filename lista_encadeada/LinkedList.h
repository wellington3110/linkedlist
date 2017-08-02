#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

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

   bool set(int pos, int value);

   bool isEmpty();
   
   int getSize();
   int get(int pos);  

   void forAll();
   void forAllEnd();

   bool sort();

   bool con(LinkedList &outra);

private:
   int size;

   Elemento* ultimo;
   Elemento* primeiro;

   bool listaOrdenada;
   
   bool addLast(int value);
   bool addFirst(int value);

   Elemento* pegarElemento(int pos); 
};
#endif LINKEDLIST_H

