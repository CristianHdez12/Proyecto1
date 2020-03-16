#include<iostream>
#ifndef PestaniaH
#define PestaniaH
using namespace std; 

class Pestania{
public:
string n;
Pestania *s;
friend class Navegador;
public:
Pestania(string n){
	this->n=n;
	this->s=NULL;
} 
~Pestania(){
	cout<<"Se ha liberado la memoria\n";
}
};

#endif
