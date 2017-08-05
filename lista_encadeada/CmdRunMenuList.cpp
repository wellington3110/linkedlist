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

bool CmdRunMenuList::cmdExecute(int menuOption, Data& d, UserInterface& ui)
{
   if (cActual)
      delete cActual;
   cActual= nullptr;

   switch (menuOption) {
      case TextMessage::OPT_ADD:                cActual= new CmdAdd(); break;
      case TextMessage::ADD_POS:                cActual= new CmdAddPos(); break;
      case TextMessage::DEL_POS:                cActual= new CmdDel(); break;
      case TextMessage::DEL_BEG:                cActual= new CmdDelBeg(); break;
      case TextMessage::DEL_LAST:               cActual= new CmdDelLast(); break;
      case TextMessage::FOR_ALL:                cActual= new CmdForAll(); break;
      case TextMessage::FOR_ALL_END:            cActual= new CmdForAllEnd(); break;
      case TextMessage::SORT:                   cActual= new CmdSort(); break;
      case TextMessage::CON:                    cActual= new CmdCon(); break;
      case TextMessage::CLEAR_LIST:             cActual= new CmdDelAll(); break;
      case TextMessage::CLS: ui.clearDisplay(); cActual= new CmdIdle(); break;
      case TextMessage::EXIT: ui.showMessage(TextMessage::BACK_MAINMENU); break;
      default:
         cActual= new CmdIdle();
         ui.showMessage(TextMessage::INVALID_VALUE); 
   }

   if (cActual)
      cActual->execute(d, ui);

   return (cActual ? true : false);
};
