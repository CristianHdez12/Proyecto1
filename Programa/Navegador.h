#include "Pestaña.h"
#ifndef NavegadorH
#define NavegadorH

class Navegador{
	private: 
	    Pestania *tope;
	    Pestania *tope2;
	public:
	     Navegador();
	    ~Navegador();
	    int MenuPrincipal();
	    void AbrirPestania(string);
	    void CerrarPestania(int);
	    void MoverAtras();
	    void MoverAdelante();
	    void PestaniaActual();
	    bool SinPestanias();
};


#endif
