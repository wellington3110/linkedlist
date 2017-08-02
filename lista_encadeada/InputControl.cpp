#include "InputControl.h"
#include <iostream>

InputControl::~InputControl()
{
}
InputControl::InputControl()
{
}

void InputControl::clearBuffer()
{
   std::cin.clear();
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
}
bool InputControl::validateInput(int& input)
{
   std::cin >> input;
   if (std::cin.fail()) {
      clearBuffer();
      return false;
   }
   return true;
}



