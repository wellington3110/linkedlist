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
   auto cActual= createCmd(menuOption);
   if(cActual)
      cActual->execute(*d, *ui);
   bool ok (cActual ? true : false);
   delete cActual;
   return ok;
}

CmdInterface* App::createCmd(int menuOption)
{
   switch (menuOption) {
   case TextMessage::LIST1: 
      d->setList1AsChosen();
      return new CmdRunMenuList();
   case TextMessage::LIST2: 
      d->setList2AsChosen();
      return new CmdRunMenuList();
   case TextMessage::SHOW_LISTMENU: 
      ui->displayListMenu(); 
      return new CmdIdle();  
   case TextMessage::CLS: 
      ui->clearDisplay(); 
      return new CmdIdle();
   case TextMessage::EXIT: break;
   default:
      ui->showMessage(TextMessage::INVALID_VALUE);
      return new CmdIdle();
   }
   
   return nullptr;
}




