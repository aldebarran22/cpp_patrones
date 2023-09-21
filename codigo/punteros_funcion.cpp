#include <cstdio>
#include <iostream>


int sumar(int a, int b){
	return a+b;
}

int restar(int a, int b){
	return a-b;
}

void operar(int (*pf)(int, int), int param1, int param2){
	std::printf("\nEjecutar funcion: %p y devuelve: %d", pf, pf(param1, param2));
}

int main(){
	int numeros[] = {1,2,3,4,5};
	
	for (int i = 0 ; i < 5 ; i++){
		std::printf("\n%d  %p", numeros[i],  numeros+i);
	}
	
	int *ptr = numeros;
	std::printf("\nDireccion ptr: %p", ptr);
	ptr++;
	std::printf("\nDireccion ptr: %p", ptr);
	
	std::printf("\nDireccion de sumar: %p", sumar);
	std::printf("\nDireccion de restar: %p", restar);
	
	// Definir un puntero a función y ejecutar la función a través del puntero:
	int (*pfun)(int, int);
	pfun = sumar;
	std::printf("\npfun devuelve: %d", pfun(3,4));
	operar(sumar, 45, 55);
	operar(restar, 44,77);
}
