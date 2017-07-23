#include "ListaEncadeada.h"

ListaEncadeada::~ListaEncadeada(void){
   this->delAll();
}

ListaEncadeada::ListaEncadeada(void) : size(0), primeiro(NULL),ultimo(NULL)
{
}



bool ListaEncadeada::add(int valor){
   if (size == 0) {
      primeiro= ultimo= new Elemento(valor, NULL, NULL);
      size++;
      return true;
}
      return addLast(valor);
}
bool ListaEncadeada::addLast(int valor){
   Elemento *novo= new Elemento(valor, ultimo, NULL);
   ultimo->setProximo(novo);
   ultimo= novo;
   size ++;
   return true;
}
bool ListaEncadeada::addFirst(int valor){
   Elemento * novo= new Elemento(valor, NULL, primeiro);
   primeiro->setAnterior(novo);
   primeiro= novo;
   size ++;
   return true;
}
bool ListaEncadeada::add(int indice, int valor){
   if(indice == 0 && size == 0){
      return add(valor);
   }
   if(indice == 0){
      return addFirst(valor);
   }
   if(indice == (size -1)){
      return addLast(valor);
   }
   Elemento * atual= pegarElemento(indice);
   if(atual != NULL)
   {
      Elemento * novo= new Elemento(valor, atual->getAnterior(), atual);
      atual->getAnterior()->setProximo(novo);
      atual->setAnterior(novo);
      size ++;
      return true;
   }
      return false;
}


bool ListaEncadeada::delAll(){
   if(size != 0){
      Elemento * atual = primeiro->getProximo();
      Elemento * proximo;
      delete primeiro;
      for(int i = 0; i < (size-1); i++){
         proximo = atual->getProximo();
         delete atual;
         atual = proximo;
      }
      size = 0;
      return true;
   }else{
      return false;
   }
}
bool ListaEncadeada::delLast(){
   if(size > 0){
	   Elemento * escolhido= ultimo;
	   ultimo= escolhido->getAnterior();
	   ultimo->setProximo(NULL);
	   delete escolhido;
	   escolhido= NULL;
	   size --;
	   return true;
   }else{
      return false;
   }
}
bool ListaEncadeada::delFirst(){
   if(size > 0){
	   Elemento * escolhido= primeiro;
	   primeiro= escolhido->getProximo();
	   primeiro->setAnterior(NULL);
	   delete escolhido;
	   escolhido= NULL;
	   size --;
	   return true;
   }else{
      return false;
   }
}
bool ListaEncadeada::del(int indice){
   if(size == 0){
		return false;
	}
	if(indice == 0){
		return delFirst();	
	}
	if(indice == (size-1)){
		return delLast();
	}
	Elemento * escolhido = pegarElemento(indice);
	if(escolhido != NULL)
	{
		escolhido->getAnterior()->setProximo(escolhido->getProximo());
		escolhido->getProximo()->setAnterior(escolhido->getAnterior());
		delete escolhido;
		escolhido= NULL;
		size --;
		return true;
	}
	return false;
}


void ListaEncadeada::forAll(){
	if(size == 0){
		std::cout << "[]" << std::endl;
	}else{
		std::ostringstream linha;
		linha << "[";
		linha << primeiro->getValor();
		Elemento *proximo= primeiro->getProximo();
		for(int i = 0; i < (size-1); i++){	
			linha << ", ";
			linha << proximo->getValor(); 
			proximo= proximo->getProximo();
		}
      linha << "]";
		std::string log= linha.str();
		std::cout << log << std::endl;
	}
}
void ListaEncadeada::forAllEnd(){
	if(size == 0){
		std::cout << "[]" << std::endl;
	}else{
		std::ostringstream linha;
		linha << "[";
		linha << ultimo->getValor();
		Elemento *anterior= ultimo->getAnterior();
		for(int i = (size-1); 0 < i; i--){	
			linha << ", ";
			linha << anterior->getValor(); 
			anterior= anterior->getAnterior();
		}
      linha << "]";
		std::string log= linha.str();
		std::cout << log << std::endl;
	}
}


void ListaEncadeada::sort(){
   if(size > 0){
      int maior= 0;
      Elemento * proximo = primeiro ->getProximo();
      Elemento * atual = primeiro;
      for (int i= 0; i < (size-1); i++){
         if(i != 0){
            atual= atual->getProximo();; 
            proximo = atual->getProximo();
         }
         for(int y= i+1 ;y < (size); y++){      
            if(atual->getValor() > proximo->getValor()){
               maior= atual->getValor();
               atual->setValor(proximo->getValor());
               proximo->setValor(maior);
            }
            proximo= proximo->getProximo();
         }
      }
   }else{
      std::cout << "A lista está vazia" << std::endl;
   }

}
void ListaEncadeada::con(ListaEncadeada &novaLista){
   if(novaLista.getSize() != 0){
      for(int i = 0; i < novaLista.getSize(); i ++){
         this->add(novaLista.get(i));
      }
   }else{
      std::cout << "Lista enviada está vazia" << std::endl;
   }
}

bool ListaEncadeada::set(int indice, int valor){
	if(size == 0){
		return false;
	}
	Elemento * escolhido= pegarElemento(indice);
	if(escolhido != NULL){
		escolhido->setValor(valor);
		return true;
	}
	return false;

}

int ListaEncadeada::getSize(){
   return size;
}
int ListaEncadeada::get(int indice){
	Elemento * escolhido = pegarElemento(indice);
	if(escolhido != NULL){
		return escolhido ->getValor();
	}
	return -1;
}

Elemento * ListaEncadeada::pegarElemento(int indice){
	if(size > indice){
		Elemento * escolhido;
		if((size/2) > indice){	
			escolhido= primeiro;
			for(int i= 0; indice > i; i++){
				escolhido= escolhido->getProximo();
			}
		}
		else{
			escolhido= ultimo;
			for(int i= size - 1; indice < i; i--)
			{
				escolhido= escolhido->getAnterior();
			}
		}
		return escolhido;
	}
	return NULL;
}




