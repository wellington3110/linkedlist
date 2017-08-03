#include "App.h"
#include "Data.h"
#include "ConsoleInterface.h"
#include "CmdRunMenuList.h"
#include "CmdIdle.h"
#include "MessageEnum.h"
#include "OptionEnum.h"

App::~App()
{
   delete d;
   delete ui;
}
App::App()
{ 
   cActual= nullptr;
   d= new Data();
   ui= new ConsoleInterface(); 
}


void App::run()
{
   bool keep;
   do {
      keep= cmdExecute( ui->getMainMenuOption() );
   } while(keep);
}

bool App::cmdExecute(int menuOption)
{
   if (cActual)
      delete cActual;
   cActual= nullptr;

   switch (menuOption) {
      case OptionEnum::LIST1: 
         d->setChosenList(OptionEnum::LIST1);
         cActual= new CmdRunMenuList();
      break;
      case OptionEnum::LIST2: 
         d->setChosenList(OptionEnum::LIST2);
         cActual= new CmdRunMenuList();
      break;
      case OptionEnum::SHOW_LISTMENU: 
         ui->displayListMenu(); 
         cActual= new CmdIdle();  
      break;
      case OptionEnum::CLS: 
         ui->clearDisplay(); 
         cActual= new CmdIdle();
      break;
      case OptionEnum::EXIT: break;
      default:
         ui->showMessage(MessageEnum::INVALID_VALUE);
         cActual= new CmdIdle();
   }

   if (cActual)
      cActual->execute(*d, *ui);
   
   return (cActual ? true : false);
}




