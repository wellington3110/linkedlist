#pragma once
#ifndef ELEMENTO_H
#define ELEMENTO_H

class Elemento
{
public:
   ~Elemento(){};
	Elemento(int valor, Elemento* anterior, Elemento* proximo);
	
	void setValor(int valor);
	void setProximo(Elemento* _elemento);
	void setAnterior(Elemento* _elemento);
   
   int getValor();
   Elemento* getProximo();
   Elemento* getAnterior();

private:
	int valor;
	Elemento* proximo;
	Elemento* anterior;
};
 #endif

