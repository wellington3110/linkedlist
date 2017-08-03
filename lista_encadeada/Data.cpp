#include "Data.h"

Data::~Data()
{
   delete list1;
   delete list2;
}
Data::Data()
{
   list1= new LinkedList();
   list2= new LinkedList();
}

LinkedList& Data::getList1()
{
   return *list1;
}
LinkedList& Data::getList2()
{
   return *list2;
}

void Data::setChosen(LinkedList& list)
{
   chosenList= &list;   
}





