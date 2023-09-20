#include <iostream>

#include "Singleton.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Singleton singleton;
	
	singleton.cargaFichero("es");
	
	return 0;
}
