#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

#include "Matriz.h"

Matriz::Matriz(std::string path){
	char linea[1024];
	std::string datos;

	std::ifstream os(path, std::ios::in);
	if (!os){
		std::cerr << "Error al abrir el fichero" << std::endl;
		return;
	}

	while (os.getline(linea, 1024)){
		datos = linea;

		std::cout << linea << std::endl;
		
	}

	os.close();	
}

void Matriz::split(const std::string &s, char delim, std::vector<int> &elems) {
	std::stringstream ss;
	ss.str(s);
	std::string item;
	
	while (std::getline(ss, item, delim)) {
		elems.push_back(std::stoi(item));
	}
}

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
