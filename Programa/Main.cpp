#include<iostream>
#include "Navegador.cpp"
#include <locale.h>
using namespace std;

int main(){
	int opc, bandera;
	string nodo,nodo1,nodo2;
	setlocale(LC_ALL, "spanish");
nodo="\n           _________________________                                               "
	 "\n    _______|_____Pestaña 1_________|_________________________________________________"
	 "\n    |                                                                               |"
	 "\n    |                                                                               |"
	 "\n    |                                                                               |"
	 "\n    |                                                                               |"
	 "\n    |          https://www.youtube.com/?gl=ES&hl=es                                 |"
	 "\n    |                                                                               |"
	 "\n    |                                                                               |"
	 "\n    |                                                                               |"
	 "\n    |                                                                               |"
	 "\n    |_______________________________________________________________________________|";	


nodo1="\n       ________________________                                   "
     "\n     __|_____Pestaña 2________|______________________________________________________"
	 "\n    |                                                                               |"
	 "\n    |                                                                               |"
     "\n    |                                                                               |"
     "\n    |                                                                               |"
	 "\n    |     https://sii.upp.edu.mx/vista/alumnos/vLoginAlumnos.php                    |"
     "\n    |                                                                               |"
     "\n    |                                                                               |"
     "\n    |                                                                               |"
     "\n    |                                                                               |"
     "\n    |______________________________________________________________________________ |";
     
nodo2="\n      ________________________                                   "
     "\n    __|_____Pestaña 3________|_________________________________________________________"
     "\n    |                                                                                 |"
     "\n    |                                                                                 |"
     "\n    |                                                                                 |"
     "\n    |                                                                                 |"
     "\n    |       https://www.instagram.com/jose._.problemas/?hl=es-la                      |"
     "\n    |                                                                                 |"
     "\n    |                                                                                 |"
     "\n    |                                                                                 |"
     "\n    |                                                                                 |"
     "\n    |_________________________________________________________________________________|";
	Navegador p1;
	p1.Apilar(nodo);
	p1.Apilar(nodo1);
	p1.Apilar(nodo2);
	do{
	    system("cls"); 
	    opc=p1.MenuPrincipal();
	    switch(opc){
	        case 1: system("cls"); p1.VerTope(); system("pause"); break;
	        case 2: system("cls"); p1.Atras(); system("pause"); break;
	        case 3: system("cls"); p1.Adelante(); system("pause"); break;
	        case 4: system("cls"); bandera=0; p1.DesApilar(bandera); system("pause"); break;
	        case 5: system("cls"); bandera=1; p1.DesApilar(bandera); system("pause"); break;
	    }
	}while(opc!=6);
}
