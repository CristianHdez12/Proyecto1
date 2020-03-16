#include "Pestaña.h"
#ifndef NavegadorH
#define NavegadorH

class Navegador{
	public: 
	    Pestania *t;
	    Pestania *t2;
	public:
	    Navegador();
	    ~Navegador();
	    int MenuPrincipal();
	    void Apilar(string);
	    void DesApilar(int);
	    void Adelante();
	    void Atras();
	    void VerTope();
	    bool PilaVacia();	
};


#endif
