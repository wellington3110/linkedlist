#pragma once
#ifndef INCLUDED_DATA_H
#define INCLUDED_DATA_H

#include "LinkedList.h"

class Data
{
public:
   Data();
   ~Data();

   void setList1AsChosen();
   void setList2AsChosen();

   LinkedList& getChosenList()const {return *chosenList;};
   LinkedList& getNotChosenList()const {return *nChosenList;};

private:
   LinkedList* list1;
   LinkedList* list2;
   LinkedList* chosenList;
   LinkedList* nChosenList;
};

#endif

