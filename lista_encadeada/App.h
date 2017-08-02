#pragma once
#ifndef INCLUDED_APP_H
#define INCLUDED_APP_H

class App
{
public:
   ~App();
   App();

   void run();

private:
   bool cmdExecute(int menuOption);
};

#endif
