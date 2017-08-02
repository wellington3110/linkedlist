#pragma once
#ifndef INCLUDED_DATA_H
#define INCLUDED_DATA_H

#include "LinkedList.h"

class Data
{
public:
   Data();
   ~Data();

   LinkedList& getList();

private:
   LinkedList* list;
};

#endif

