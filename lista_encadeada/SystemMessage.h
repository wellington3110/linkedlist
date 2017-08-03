#pragma once
#ifndef INCLUDED_SYSTEMMESSAGE_H
#define INCLUDED_SYSTEMMESSAGE_H

#include<map>

class SystemMessage
{
public:
   ~SystemMessage(){};
   SystemMessage(){ createMessage();};

   std::string getMessage(int m);

private:
   std::map<int, std::string> message;

   void createMessage();
};

#endif

