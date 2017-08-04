#pragma once
#ifndef INCLUDED_USERINTERFACE_H
#define INCLUDED_USERINTERFACE_H

#include<string>
#include "TextMessage.h"

class UserInterface
{
public:
   virtual ~UserInterface(){};
  
   virtual int getMainMenuOption()= 0;
   virtual int getListMenuOption()= 0;
   virtual bool doInput(int& input, TextMessage::TxtMessageId m)= 0;

   virtual void clearDisplay()= 0;
   virtual void displayMainMenu()= 0;
   virtual void displayListMenu()= 0;
   virtual void showMessage(std::string m)= 0;
   virtual void showMessage(TextMessage::TxtMessageId mId)= 0;
   
};

#endif USERINTERFACE_H