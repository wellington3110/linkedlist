#pragma once
#ifndef INCLUDED_DATA_H
#define INCLUDED_DATA_H

#include "LinkedList.h"

class Data
{
public:
   Data();
   ~Data();

   LinkedList& getList1();
   LinkedList& getList2();
   void setChosen(LinkedList& list);

private:
   LinkedList* list1;
   LinkedList* list2;
   LinkedList* chosenList;
};

#endif

