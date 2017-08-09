#pragma once
#ifndef INCLUDED_APP_H
#define INCLUDED_APP_H

class UserInterface;
class Data;
class CmdInterface;

class App
{
public:
   ~App();
   App();

   void run();

private:  
   Data* d;
   UserInterface* ui;
   CmdInterface* cActual;

   bool cmdExecute(int menuOption);

};

#endif
