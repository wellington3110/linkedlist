#include <iostream>
#include <fstream>
#include "Teste.h"

using namespace std;


void escreverNoArquivo()
{
   ofstream file("example.bin", ios::binary | ios::app);
   for(int i = 0; i < 10; i++){
      file.write((char*)&i, sizeof(i));
   }
   file.close();
}

void lerNoArquivo()
{
   ifstream file("example.bin", ios::binary|ios::ate);
   if (file.tellg() >= 4) {
      int size = file.tellg()/4;
      file.seekg(ios::beg);
      int x;
      for(int i= 0; i < size; i++) {
         file.read((char*)&x, 4);
         cout << x << endl;
      }
   }
   file.close();
}

void apagarNoArquivo(int pos)
{
   ifstream file("example.bin", ios::binary|ios::ate);
   ofstream copy("exampleCopy.bin", ios::binary|ios::app);   
   int size= file.tellg()/4;
   file.seekg(ios::beg);
   int x;
   for(int i= 0; i < size; i++) {
   file.read((char*)&x, 4);
      if (i != pos) {
         copy.write((char*)&x, 4);
      }
   }
   file.close();
   copy.close();
   remove("example.bin");
   rename("exampleCopy.bin", "example.bin");
}

int main(){

   escreverNoArquivo();
   lerNoArquivo();
   std::cout << endl;
   apagarNoArquivo(1);
   lerNoArquivo();
   return 0;
}