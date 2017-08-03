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
#include "MessageEnum.h"
#include "CmdIdle.h"
#include "OptionEnum.h"

void CmdRunMenuList::execute(Data& d, UserInterface& ui)
{
   bool keep;
   ui.showMessage(MessageEnum::ENDL);
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
      case OptionEnum::ADD: cActual= new CmdAdd(); break;
      case OptionEnum::ADD_POS: cActual= new CmdAddPos(); break;
      case OptionEnum::DEL_POS: cActual= new CmdDel(); break;
      case OptionEnum::DEL_BEG: cActual= new CmdDelBeg(); break;
      case OptionEnum::DEL_LAST: cActual= new CmdDelLast(); break;
      case OptionEnum::FOR_ALL: cActual= new CmdForAll(); break;
      case OptionEnum::FOR_ALL_END: cActual= new CmdForAllEnd(); break;
      case OptionEnum::SORT: cActual= new CmdSort(); break;
      case OptionEnum::CON: cActual= new CmdCon(); break;
      case OptionEnum::CLEAR_LIST: cActual= new CmdDelAll(); break;
      case OptionEnum::CLS: ui.clearDisplay(); cActual= new CmdIdle(); break;
      case OptionEnum::EXIT: ui.showMessage(MessageEnum::BACK_MAINMENU); break;
      default:
         cActual= new CmdIdle();
         ui.showMessage(MessageEnum::INVALID_VALUE); 
   }

   if (cActual)
      cActual->execute(d, ui);

   return (cActual ? true : false);
};
