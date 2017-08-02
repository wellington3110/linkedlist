#include "LinkedList.h"
#include <sstream>
#include <iostream>
#include "Elemento.h"

////////////////////metodos de inserção de elemento////////////
bool LinkedList::add(int value)
{
   if (size == 0) {
      primeiro= ultimo= new Elemento(value, NULL, NULL);
      listaOrdenada= false;
      size++;
      return true;      
   }
      return addLast(value);
}
bool LinkedList::addLast(int value)
{
   Elemento* novo= new Elemento(value, ultimo, NULL);
   ultimo->setProximo(novo);
   ultimo= novo;
   listaOrdenada= false;
   size++;
   return true;
}
bool LinkedList::addFirst(int value)
{
   Elemento* novo= new Elemento(value, NULL, primeiro);
   primeiro->setAnterior(novo);
   primeiro= novo;
   listaOrdenada= false;
   size++;
   return true;
}
bool LinkedList::add(int pos, int value){
   if (pos > size) {
      return false;
   }
   if ( (pos == 0) && (size == 0) ) {
      return add(value);
   }
   if (pos == 0) {
      return addFirst(value);
   }
   if (pos == size) {
      return addLast(value);
   }
   Elemento* atual= pegarElemento(pos);
   Elemento* novo= new Elemento(value, atual->getAnterior(), atual);
   atual->getAnterior()->setProximo(novo);
   atual->setAnterior(novo);
   listaOrdenada = false;
   size++;
   return true;
}
//////////////////////////////////////////////////////////////

////////////////////metodos de remoção////////////////////////
bool LinkedList::delAll()
{
   if (size > 0) {
      Elemento* atual= primeiro->getProximo();
      Elemento* proximo;
      delete primeiro;
      for (int i = 0; i < (size-1); i++) {
         proximo= atual->getProximo();
         delete atual;
         atual= proximo;
      }
      size= 0;
      return true;
   }
   else
      return false;
   }
bool LinkedList::delLast()
{
   if (size > 0) {
	   Elemento* escolhido= ultimo;
      if (size > 1) {
	      ultimo= escolhido->getAnterior();
	      ultimo->setProximo(NULL);
      } else {
         primeiro= NULL;
         ultimo= NULL;
      }
	   delete escolhido;
      size--;
	   return true;
   }
   else
      return false;   
}
bool LinkedList::delFirst()
{
   if (size > 0) {
	   Elemento* escolhido= primeiro;
      if (size > 1) {
	      primeiro= escolhido->getProximo();
	      primeiro->setAnterior(NULL);
      } else {
         ultimo= NULL;
         primeiro= NULL;
      }
	   delete escolhido;
      size--;
	   return true;
   }
   else
      return false;
}
bool LinkedList::del(int pos)
{
   if (pos >= size) {
      return false;
   }
	if (pos == 0) {
		return delFirst();	
	}
	if ( pos == (size-1) ) {
		return delLast();
	}
	Elemento* escolhido= pegarElemento(pos);
	escolhido->getAnterior()->setProximo(escolhido->getProximo());
	escolhido->getProximo()->setAnterior(escolhido->getAnterior());
	delete escolhido;
   size--;
	return true;
}
//////////////////////////////////////////////////////////////

int LinkedList::getSize()
{
   return size;
}
int LinkedList::get(int pos)
{
	Elemento* escolhido= pegarElemento(pos);
	if (escolhido != NULL) {
      return escolhido->getValor();
	}
	return -1;
}

bool LinkedList::isEmpty()
{
   if (size == 0) {
      return true;    
   } 
   else
      return false; 
}

bool LinkedList::set(int pos, int value)
{  //implementar metodo update para o set
	Elemento* escolhido= pegarElemento(pos);
	if (escolhido != NULL) {
		escolhido->setValor(value);
      listaOrdenada= false;
		return true;
	}
	return false;

}

bool LinkedList::sort()
{
   if ( (size > 0) || (listaOrdenada == false) ) {
      int maior= 0;
      Elemento* proximo= primeiro ->getProximo();
      Elemento* atual= primeiro;
      for (int i= 0; i < (size-1); i++){
         if (i != 0) {
            atual= atual->getProximo();; 
            proximo= atual->getProximo();
         }
         for ( int y= i+1 ;y < (size); y++ ) {      
            if(atual->getValor() > proximo->getValor()){
               maior= atual->getValor();
               atual->setValor(proximo->getValor());
               proximo->setValor(maior);
            }
            proximo= proximo->getProximo();
         }
      }
      listaOrdenada= true;
      return true;
   }
   return false;
}
void LinkedList::forAll()
{
	if (size == 0) {
		std::cout << "[]" << std::endl;
	} 
   else {
		std::ostringstream linha;
		linha << "[";
		linha << primeiro->getValor();
		Elemento* proximo= primeiro->getProximo();
		for ( int i = 0; i < (size-1); i++ ) {	
			linha << ", ";
			linha << proximo->getValor(); 
			proximo= proximo->getProximo();
		}
      linha << "]";
		std::string log= linha.str();
		std::cout << log << std::endl;
	}
}
void LinkedList::forAllEnd()
{
	if (size == 0) {
		std::cout << "[]" << std::endl;
	} 
   else {
		std::ostringstream linha;
		linha << "[";
		linha << ultimo->getValor();
		Elemento* anterior= ultimo->getAnterior();
		for ( int i = (size-1); 0 < i; i-- ) {	
			linha << ", ";
			linha << anterior->getValor(); 
			anterior= anterior->getAnterior();
		}
      linha << "]";
		std::string log= linha.str();
		std::cout << log << std::endl;
	}
}
bool LinkedList::con(LinkedList &outra)
{
   if (!outra.isEmpty()) {
      for (int i= 0; i < outra.getSize(); i ++) {
         add(outra.get(i));
      }
      listaOrdenada= false;
      return true;
   }
   return false;
}

Elemento* LinkedList::pegarElemento(int pos)
{
	if (pos < size) {
		Elemento* escolhido;
		if ( (size/2) > pos ) {	
			escolhido= primeiro;
			for (int i= 0; pos > i; i++) {
				escolhido= escolhido->getProximo();
			}
		}
		else{
			escolhido= ultimo;
			for (int i= size - 1; pos < i; i--) {
				escolhido= escolhido->getAnterior();
			}
		}
		return escolhido;
	}
	return NULL;
}









