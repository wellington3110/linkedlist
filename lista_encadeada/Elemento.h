#pragma once
#ifndef INCLUDED_ELEMENTO_H
#define INCLUDED_ELEMENTO_H

class Elemento
{
public:
   ~Elemento(){};
	Elemento(int valor, Elemento* anterior, Elemento* proximo);
	
   int getValor();
   Elemento* getProximo();
   Elemento* getAnterior();

	void setValor(int valor);
	void setProximo(Elemento* _elemento);
	void setAnterior(Elemento* _elemento);
 
private:
	int valor;
	Elemento* proximo;
	Elemento* anterior;
};
 #endif

