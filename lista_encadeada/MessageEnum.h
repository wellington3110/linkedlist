#pragma once
#ifndef INCLUDED_MESSAGEENUM_H
#define INCLUDED_MESSAGEENUM_H

class MessageEnum
{
public:
   ~MessageEnum();
   MessageEnum();

   enum message {ADD, N_ADD, DEL, N_DEL, EMPTY_LIST, INVALID_VALUE, POS, VALUE, BACK_MAINMENU, OPTION, NUM_ELEMNT, N_SORT, N_CON, ENDL};
};

#endif