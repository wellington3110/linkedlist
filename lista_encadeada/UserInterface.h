#pragma once
#ifndef INCLUDED_USERINTERFACE_H
#define INCLUDED_USERINTERFACE_H

class UserInterface
{
public:
   virtual ~UserInterface(){};

   virtual void displayMainMenu()= 0;
   virtual void displayListMenu()= 0;
   virtual int getMainMenuOption()= 0;
   virtual int getListMenuOption()= 0;
   virtual void showMessage(int m)= 0;
   virtual void clearDisplay()= 0;
};

#endif USERINTERFACE_H