#pragma once
#include<iostream>

class Elemento
{
public:
	~Elemento();
	Elemento(int valor, Elemento * anterior, Elemento * proximo);
	
	void setValor(int valor);
	void setProximo(Elemento * elemento);
	void setAnterior(Elemento * elemento);
   
   int getValor();
   Elemento * getProximo();
   Elemento * getAnterior();

private:
	int valor;
	Elemento *proximo;
	Elemento *anterior;

};

