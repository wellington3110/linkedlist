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
   chosenList= list1;
   nChosenList= list2;
}

void Data::setList1AsChosen()
{
   chosenList= list1;
   nChosenList= list2;
}

void Data::setList2AsChosen()
{
   chosenList= list2;
   nChosenList= list1;
}





