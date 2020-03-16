#include<iostream>
#include "Navegador.h"
using namespace std;


Navegador::Navegador(){
	tope=NULL;
	tope2=NULL;
}

Navegador::~Navegador(){
}

int Navegador::MenuPrincipal(){
	int opc;
	cout<<"\t\tMenu del navegador\nQue desea hacer?: \n1.Ver pestania actual\n2.Ir hacia atras\n3.Ir hacia adelante\n4.Cerrar pestania"
	<<"\n5.Cerrar navegador\n6.Salir\nOpcion: "; 
	cin>>opc;
	return opc;
}
void Navegador::Apilar(string nodo){
	
	Pestania *nuevoNodo= new Pestania(nodo);
	
	if(!nuevoNodo){
		cout<<"No se puede reservar la memoria";
	}
	else{
		nuevoNodo->siguiente=tope;
		tope=nuevoNodo;
	}
}

void Navegador::DesApilar(int a){
	Pestania *aux=NULL;
	aux=tope;
	if(a==0){
	    if(tope2==NULL){
	        if(PilaVacia()==false){
		        tope=aux->siguiente;
		        cout<<"La pestania ha sido cerrada correctamente\n";
	            delete(aux);
	        }
	        else{
		    cout<<"No hay mas pestanias abiertas\n";
	        }
	    }
	    else{
		    cout<<"Necesitas estar en la ultima pestania para poder cerrar la pestania"<<endl;
	    }
	}
	if(a==1){
	    if(tope2==NULL){
	        if(PilaVacia()==false){
		        tope=aux->siguiente;
		        cout<<"La pestania ha sido cerrada correctamente\n";
		        delete(aux);
		        this->Navegador::DesApilar(a);
	        }
 	        else{
		    cout<<"No hay mas pestanias abiertas\n";
	        }
	    }
	    else{
		    cout<<"Necesitas estar en la ultima pestania para poder cerrar todas las pestanias"<<endl;
	    }
	}
}

void Navegador::Atras(){
	Pestania *aux=NULL;
	aux=tope; 
	if(PilaVacia()==false){
	    if(tope->siguiente==NULL){
		    cout<<tope->nodo<<endl;
		    cout<<"\n\tPrimera pestania, no puedes ir hacia atras"<<endl;
	    }
	    else{
		    tope=aux->siguiente;
		    Pestania *nuevoNodo2=new Pestania(aux->nodo);
		    nuevoNodo2->siguiente=tope2;
		    tope2=nuevoNodo2;
		    cout<<tope->nodo<<endl;
	    }
	}
	else{
	    cout<<"No hay mas pestanias abiertas"<<endl;
	}
}

void Navegador::Adelante(){
	Pestania *aux2=NULL;
	aux2=tope2;
	if(PilaVacia()==false){
	    if(tope2==NULL){
		    cout<<tope->nodo<<endl;
		    cout<<"\n\tUltima pestania, no puedes ir hacia adelante\n";
	    }
	    else{
		    tope2=aux2->siguiente;
		    aux2->siguiente=tope;
		    tope=aux2;
		    cout<<tope->nodo<<endl;
	    }
	}
	else{
	    cout<<"No hay mas pestanias abiertas"<<endl;
	}
}

void Navegador::VerTope(){
	if(PilaVacia()==false){
		cout<<tope->nodo<<endl;
	}
	else{
		cout<<"No hay mas pestanias abiertas\n";
	}
}

bool Navegador::PilaVacia(){
	if(tope==NULL){
		return true;
	}
	else{
		return false;
	}
}
