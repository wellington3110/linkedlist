#include "Elemento.h"

Elemento::Elemento(int valor, Elemento* anterior, Elemento* proximo)
	: valor(valor), anterior(anterior), proximo(proximo)
{}

int Elemento::getValor(){
	return valor;
}
Elemento* Elemento::getProximo(){
	return proximo;
}
Elemento* Elemento::getAnterior(){
	return anterior;
}

void Elemento::setValor(int _valor){
	valor= _valor;
}
void Elemento::setProximo(Elemento* _elemento){
	proximo= _elemento;
}
void Elemento::setAnterior(Elemento* _elemento){
	anterior= _elemento;
}








