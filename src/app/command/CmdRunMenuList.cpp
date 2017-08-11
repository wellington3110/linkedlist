#include "CmdRunMenuList.h"
#include "CmdAdd.h"
#include "CmdAddPos.h"
#include "CmdCon.h"
#include "CmdDel.h"
#include "CmdDelAll.h"
#include "CmdDelBeg.h"
#include "CmdDelLast.h"
#include "CmdForAll.h"
#include "CmdForAllEnd.h"
#include "CmdSort.h"
#include "CmdIdle.h"

void CmdRunMenuList::execute(Data& d, UserInterface& ui)
{
   bool keep;
   ui.showMessage(TextMessage::ENDL);
   do {
      keep= cmdExecute(ui.getListMenuOption(), d, ui);
   } while (keep);
};

CmdInterface* CmdRunMenuList::createCmd(int menuOption, UserInterface& ui)
{
   switch (menuOption) {
      case TextMessage::OPT_ADD:                return new CmdAdd(); 
      case TextMessage::ADD_POS:                return new CmdAddPos(); 
      case TextMessage::DEL_POS:                return new CmdDel(); 
      case TextMessage::DEL_BEG:                return new CmdDelBeg(); 
      case TextMessage::DEL_LAST:               return new CmdDelLast();
      case TextMessage::FOR_ALL:                return new CmdForAll(); 
      case TextMessage::FOR_ALL_END:            return new CmdForAllEnd(); 
      case TextMessage::SORT:                   return new CmdSort(); 
      case TextMessage::CON:                    return new CmdCon(); 
      case TextMessage::CLEAR_LIST:             return new CmdDelAll(); 
      case TextMessage::CLS: ui.clearDisplay(); return new CmdIdle(); 
      case TextMessage::EXIT: ui.showMessage(TextMessage::BACK_MAINMENU); break;
      default:
         cActual= new CmdIdle();
         ui.showMessage(TextMessage::INVALID_VALUE); 
   }
   return nullptr;
}

bool CmdRunMenuList::cmdExecute(int menuOption, Data& d, UserInterface& ui)
{
   auto cActual= createCmd(menuOption, ui);
   if(cActual)
      cActual->execute(d, ui);
   bool ok= (cActual ? true : false);
   delete cActual;
   return ok;
};
