#include<iostream>
#include "Navegador.h"
using namespace std;


Navegador::Navegador(){
t=NULL;
t2=NULL;
}

Navegador::~Navegador(){
}

int Navegador::MenuPrincipal(){
int opc;
cout<<"\t\tMenu del navegador\nQue desea hacer?: \n1.Ver pestania actual\n2.Ir hacia atras\n3.Ir hacia adelante\n4.Cerrar pestania"
<<"\n5.Cerrar navegador\n6.Salir\nOpcion: "; cin>>opc;
return opc;
}
void Navegador::Apilar(string n){
	
Pestania *nuevoNodo= new Pestania(n);

if(!nuevoNodo){
	cout<<"No se puede reservar la memoria";
}
else{
	nuevoNodo->s=t;
	t=nuevoNodo;
}
}

void Navegador::DesApilar(int a){
Pestania *aux=NULL;
aux=t;
if(a==0){
if(t2==NULL){
if(PilaVacia()==false){
	t=aux->s;
	cout<<"La pestania ha sido cerrada correctamente\n";
	delete(aux);
}
else{
	cout<<"No hay mas pestanias abiertas\n";
}}
else{
	cout<<"Necesitas estar en la ultima pestania para poder cerrar la pestania"<<endl;
}}
if(a==1){
if(t2==NULL){
if(PilaVacia()==false){
	t=aux->s;
	cout<<"La pestania ha sido cerrada correctamente\n";
	delete(aux);
	this->Navegador::DesApilar(a);
}
else{
	cout<<"No hay mas pestanias abiertas\n";
}}
else{
	cout<<"Necesitas estar en la ultima pestania para poder cerrar todas las pestanias"<<endl;
}
}
}

void Navegador::Atras(){
Pestania *aux=NULL;
aux=t; 
if(PilaVacia()==false){
if(t->s==NULL){
	cout<<t->n<<endl;
	cout<<"\n\tPrimera pestania, no puedes ir hacia atras"<<endl;
}
else{
	t=aux->s;
	Pestania *nuevoNodo2=new Pestania(aux->n);
	nuevoNodo2->s=t2;
	t2=nuevoNodo2;
	cout<<t->n<<endl;
}
}
else{
cout<<"No hay mas pestanias abiertas"<<endl;
}
}

void Navegador::Adelante(){
Pestania *aux2=NULL;
aux2=t2;
if(PilaVacia()==false){
if(t2==NULL){
	cout<<t->n<<endl;
	cout<<"\n\tUltima pestania, no puedes ir hacia adelante\n";
}
else{
	t2=aux2->s;
	aux2->s=t;
	t=aux2;
	cout<<t->n<<endl;
}
}
else{
cout<<"No hay mas pestanias abiertas"<<endl;
}
}

void Navegador::VerTope(){
if(PilaVacia()==false){
	cout<<t->n<<endl;
}
else{
	cout<<"No hay mas pestanias abiertas\n";
}
}

bool Navegador::PilaVacia(){
if(t==NULL){
	return true;
}
else{
	return false;
}
}
