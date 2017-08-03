#pragma once
#ifndef INCLUDED_OPTIONENUM_H
#define INCLUDED_OPTIONENUM_H

class OptionEnum
{
public:
   ~OptionEnum();
   OptionEnum();

   enum commomOption{CLS=90, EXIT= 99};
   enum mainMenu{LIST1 = 1, LIST2, SHOW_LISTMENU};
   enum listMenu{ADD = 1, ADD_POS, DEL_POS, DEL_BEG, DEL_LAST, FOR_ALL, FOR_ALL_END, SORT, CON, CLEAR_LIST};
};

#endif