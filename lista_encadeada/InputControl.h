#pragma once
class InputControl
{
public:
   ~InputControl();
   InputControl();

   static void clearBuffer();
   static bool validateInput(int& input);
};

