#include <vector>
#include <iostream>

#include "Matriz.h"

Matriz::Matriz(int f, int c)
{
	this->f = f;
	this->c = c;
	
	// crear la matriz de f x c y rellenar de numero aleatorios
	std::vector<std::vector<int>> m(f, std::vector<int>(c));
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {

			m.at(i).at(j) = std::rand() % 100;
		}
	}
	this->matriz = m;
}

void Matriz::imprimir(){

	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			std::cout << matriz.at(i).at(j) << " ";
		}
		std::cout << std::endl;
	}
}

Matriz::~Matriz()
{
}