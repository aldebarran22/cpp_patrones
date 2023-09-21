#include <iostream>
#include <windows.h>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
void HelloWorld()
int sumar(int, int)
void printArray(int *, int)
*/

typedef void (CDECL *TptrHW)();
typedef int (CDECL *TptrSumar)(int,int);

int main(int argc, char** argv) {
	HINSTANCE dll;
	TptrHW ptrHW;
	TptrSumar ptrSumar;
	
	// Cargar la DLL
	dll = LoadLibrary("funciones.dll");
	if (dll == 0){
		std::cout << "Error al cargar la DLL" << std::endl;
		exit(1);
	}
	std::cout << "DLL cargada ..." << std::endl;
	
	// Recuperar la dirección de la función a ejecutar de la DLL:
	ptrHW = (void (__cdecl *)()) GetProcAddress(dll, "HelloWorld");
	ptrHW();
	
	ptrSumar = (int (__cdecl *)(int, int)) GetProcAddress(dll, "sumar");
	std::cout << "sumar: 55, 66 " << ptrSumar(55,66) << std::endl;
	
	FreeLibrary(dll);
	return 0;
}
