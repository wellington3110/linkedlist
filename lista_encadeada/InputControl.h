#pragma once
#ifndef INCLUDED_INPUTCONTROL_H
#define INCLUDED_INPUTCONTROL_H

class InputControl
{
public:
   ~InputControl(){};
   InputControl(){};

   static void clearBuffer();
   static bool validateInput(int& input);
};

#endif

