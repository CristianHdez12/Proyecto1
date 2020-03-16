#include<iostream>
#include "Navegador.cpp"
#include <locale.h>
using namespace std;

int main(){
	int opc, b;
	string n,n1,n2, n3;
	setlocale(LC_ALL, "spanish");
	n="            _________________________                                               "
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


    n1="\n     ________________________                                   "
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
     
    n2="\n    ________________________                                   "
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
	p1.Apilar(n);
	p1.Apilar(n1);
	p1.Apilar(n2);
	do{
	    system("cls"); 
	    opc=p1.MenuPrincipal();
	    switch(opc){
	        case 1: system("cls"); p1.VerTope(); system("pause"); break;
	        case 2: system("cls"); p1.Atras(); system("pause"); break;
	        case 3: system("cls"); p1.Adelante(); system("pause"); break;
	        case 4: system("cls"); b=0; p1.DesApilar(b); system("pause"); break;
	        case 5: system("cls"); b=1; p1.DesApilar(b); system("pause"); break;
	    }
	}while(opc!=6);
}
