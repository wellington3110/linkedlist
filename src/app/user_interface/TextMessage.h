#pragma once
#ifndef INCLUDED_SYSTEMMESSAGE_H
#define INCLUDED_SYSTEMMESSAGE_H

#include <map>

class TextMessage
{
public:
   enum TxtMessageId {ADD, N_ADD, DEL, N_DEL, EMPTY_LIST, INVALID_VALUE, POS, VALUE, BACK_MAINMENU, OPTION, NUM_ELEMNT, N_SORT, N_CON, ENDL};

   enum TxtOptionsId {
         TITLE= 0, LIST1= 1, LIST2= 2, SHOW_LISTMENU= 3,
         OPT_ADD= 11, ADD_POS, DEL_POS, DEL_BEG, DEL_LAST, FOR_ALL, FOR_ALL_END, SORT, CON, CLEAR_LIST= 50, CHOSEN_LIST1= 21, CHOSEN_LIST2,
         DOTTED_LINE= 89,
         CLS = 90, EXIT= 99}; 

public:
   TextMessage() { createTxtMessages(); createTxtOptions(); };

   std::string getTextForMessage(TxtMessageId mId);
   std::string getTextForOptions(TxtOptionsId mId);

private:
   std::map<TxtOptionsId, std::string> mapTxtOptions;
   std::map<TxtMessageId, std::string> mapTxtMessages;

   void createTxtMessages();
   void createTxtOptions();
};

#endif
