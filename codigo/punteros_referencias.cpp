
#include <iostream>


int main(){
	// Variables:
	int var1 = 0,  var2=20;
	
	// Con punteros:
	int *p; // No es obligatorio inicializarlo
	
	p = &var1;
	std::cout << "var1 a traves de p " << *p << std::endl;
	
	p = &var2; // El puntero se puede cambiar
	std::cout << "var2 a traves de p " << *p << std::endl;
	
	// reservar Mem: SI
	
	// Con referencias
	int &ref = var1; // Hay que inicializar
	
	std::cout << "var1 a traves de ref " << ref << std::endl;
	ref = var2; // Es como si hiciera : var1 = var2 La ref NO cambia!!!
	
	std::cout << "var2 a traves de ref " << ref << std::endl;
	std::cout << "var2 = " << var2 << std::endl;
	std::cout << "var1 = " << var1 << std::endl;
	
	// reservar Mem: NO
}
