#include "Elemento.h"

Elemento::~Elemento(void)
{}
Elemento::Elemento(int valor, Elemento * anterior, Elemento * proximo)
	: valor(valor), anterior(anterior), proximo(proximo)
{}

int Elemento::getValor(){
	return valor;
}
Elemento * Elemento::getProximo(){
	return proximo;
}
Elemento * Elemento::getAnterior(){
	return anterior;
}

void Elemento::setValor(int valor){
	this->valor= valor;
}
void Elemento::setProximo(Elemento *elemento){
	this->proximo= elemento;
}
void Elemento::setAnterior(Elemento * elemento){
	this->anterior= elemento;
}








