#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "IVentana.h"
#include "Ventana.h"

#include "VentanaDecorator.h"
#include "BordeDecorator.h"
#include "BotonAyudaDecorator.h"
#include "BotonCerrarDecorator.h"


int main(int argc, char** argv) {
	IVentana *v1 = new Ventana("Titulo de la ventana");
	v1->dibujar();
	std::cout << std::endl;
	
	IVentana *v2 = new BotonAyudaDecorator(v1);
	v2->dibujar(); 
	std::cout << std::endl;
	
	
	IVentana *v3 = new BordeDecorator(v1);
	v3->dibujar(); 
	std::cout << std::endl;
	
	IVentana *v4 = new BordeDecorator(v3);
	v4->dibujar();
	std::cout << std::endl;
	
	
	delete v1;
	v1=nullptr;
	
	delete v2;
	v2=nullptr;
	
	delete v3;
	v3=nullptr;
	
	delete v4;
	v4=nullptr;
	
	return 0;
}
