#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

#include "Matriz.h"

Matriz::Matriz(std::string path){
	char linea[1024];
	std::string datos;
	
	this->f = 0;
	this->c = 0;

	std::ifstream os(path, std::ios::in);
	if (!os){
		std::cerr << "Error al abrir el fichero" << std::endl;
		return;
	}

	std::vector<int> fila;
	
	while (os.getline(linea, 1024)){
		datos = linea;

		std::cout << linea << std::endl;
		this->split(linea, ';', fila);
		this->matriz.push_back(fila);
		this->c = fila.size();
		fila.clear();
		this->f++;		
	}
	os.close();	
}

void Matriz::to_csv(std::string path){
	std::string linea;
	std::ofstream ofs;
	
	ofs.open(path, std::ios::out);
	for (auto fila : this->matriz){
		linea = "";
		this->join(fila, ';', linea);
		ofs << linea << std::endl;
	}
	ofs.close();
}

void Matriz::join(const std::vector<int> &fila, char delim, std::string &linea){
		
	for (auto numero : fila){
		linea += std::to_string(numero) + delim;
	}
	
	// Quitar el último ;
	linea = linea.substr(0,linea.length()-1);
	
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
