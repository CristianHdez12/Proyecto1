#include<iostream>
#ifndef PestaniaH
#define PestaniaH
using namespace std; 

class Pestania{
	private:
	string nodo;
	Pestania *siguiente;
	friend class Navegador;
	public:
	Pestania(string nodo){
		this->nodo=nodo;
		this->siguiente=NULL;
	} 
	~Pestania(){
		cout<<"Se ha liberado la memoria\n";
	}
};

#endif
