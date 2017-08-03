#include "Data.h"
#include "OptionEnum.h"

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

void Data::setChosenList(int optionList)
{
   if(optionList == OptionEnum::LIST1) {
      chosenList= list1;
      nChosenList= list2;
   } else {
      chosenList= list2;
      nChosenList= list1;   
   }
}





