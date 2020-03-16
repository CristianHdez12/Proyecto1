#include<iostream>
#include "Navegador.cpp"
using namespace std;

int main(){
int opc, b;
string n,n1,n2, n3;
n="Esta es la primera pestania pestania\nhsuhudhsauidhsa\njsjd\ndfdgdf\nfdgdfgd\ngdgfdgfdgfds\nksdhsjsd"
"\nAqui esta una continuacion de lo que sigue";
n1="Esta es la segunda pestania\nhdufdifdsjidijf\nsgjhgsjhdgsdsa\nnsdgjshgdjsg\bsdhhdsjsa";
n2="Esta es la penultima pestania\nusjidhjshduisah\nhusagdsag\njsdishaui\nsdhsajdhsahdissdsad";
n3="Esta es la ultima pestania\nhdhkshfkjsdhf\nsdhdhud\njdhuishdf\ndfhdsjkhfhdsfdsf";
Navegador p1;
p1.Apilar(n);
p1.Apilar(n1);
p1.Apilar(n2);
p1.Apilar(n3);
do{
system("cls"); opc=p1.MenuPrincipal();
switch(opc){
case 1: system("cls"); p1.VerTope(); system("pause"); break;
case 2: system("cls"); p1.Atras(); system("pause"); break;
case 3: system("cls"); p1.Adelante(); system("pause"); break;
case 4: system("cls"); b=0; p1.DesApilar(b); system("pause"); break;
case 5: system("cls"); b=1; p1.DesApilar(b); system("pause"); break;
}
}while(opc!=6);
}
