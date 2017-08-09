#include "App.h"
#include "Data.h"
#include "ConsoleInterface.h"
#include "CmdRunMenuList.h"
#include "CmdIdle.h"

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
      case TextMessage::LIST1: 
         d->setList1AsChosen();
         cActual= new CmdRunMenuList();
      break;
      case TextMessage::LIST2: 
         d->setList2AsChosen();
         cActual= new CmdRunMenuList();
      break;
      case TextMessage::SHOW_LISTMENU: 
         ui->displayListMenu(); 
         cActual= new CmdIdle();  
      break;
      case TextMessage::CLS: 
         ui->clearDisplay(); 
         cActual= new CmdIdle();
      break;
      case TextMessage::EXIT: break;
      default:
         ui->showMessage(TextMessage::INVALID_VALUE);
         cActual= new CmdIdle();
   }

   if (cActual)
      cActual->execute(*d, *ui);
   
   return (cActual ? true : false);
}




