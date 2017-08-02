#include "Data.h"

Data::~Data()
{
   delete list;
}
Data::Data()
{
   list= new LinkedList();
}

LinkedList& Data::getList()
{
   return *list;
}



