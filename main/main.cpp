#include <locale.h>
#include "App.h"

int main()
{
   setlocale(LC_ALL, "Portuguese");
   App a;
   a.run();
   return 0;
}