#include <stdexcept>
#include <iostream>

#include "Fachada.h"

Fachada::Fachada()
{
	// Cargar la DLL
	this->dll = LoadLibrary("funciones.dll");
	if (this->dll == 0){
		throw std::invalid_argument("Error al cargar la DLL: funciones.dll");
		
	}
	std::cout << "DLL: funciones.dll cargada ..." << std::endl;
}


void Fachada::HelloWorld(){
	void (CDECL *ptrHW)();
	
	ptrHW = (void (__cdecl *)()) GetProcAddress(dll, "HelloWorld");
	
	if (ptrHW != 0){
		ptrHW();  // Ejecutar la funcion de la DLL
		
	} else {
			throw std::invalid_argument("Error al localizar HelloWorld en la DLL: funciones.dll");
	}
}

int Fachada::sumar(int a, int b){
	int (CDECL *ptrSumar)(int, int);
	
	ptrSumar = (int (__cdecl *)(int, int)) GetProcAddress(dll, "sumar");
	
	if (ptrSumar != 0){
		return ptrSumar(a,b);  // Ejecutar la funcion de la DLL
		
	} else {
			throw std::invalid_argument("Error al localizar sumar en la DLL: funciones.dll");
	}
}

void Fachada::printArray(int *array, int size){
	void (CDECL *ptrPA)(int *, int);
	
	ptrPA = (void (__cdecl *)(int *, int)) GetProcAddress(dll, "printArray");
	
	if (ptrPA != 0){
		ptrPA(array, size);  // Ejecutar la funcion de la DLL
		
	} else {
			throw std::invalid_argument("Error al localizar printArray en la DLL: funciones.dll");
	}
}

Fachada::~Fachada()
{
	if (this->dll != 0){
		FreeLibrary(dll);
		std::cout << "DLL: funciones.dll descargada ..." << std::endl;
	}
}
