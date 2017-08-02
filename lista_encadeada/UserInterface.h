#pragma once
#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include<string>

class UserInterface
{
public:
   virtual ~UserInterface();

   virtual void displayMainMenu() const = 0;
   virtual void displayListMenu() const = 0;
   virtual int getMainMenu() const = 0;
   virtual int getListMenu() const = 0;
   virtual std::string getMessage(int m) const = 0;
};

#endif USERINTERFACE_H