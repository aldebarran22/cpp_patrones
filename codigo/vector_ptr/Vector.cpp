#include <iostream>

#include "Vector.h"


Vector::Vector(int n)
{
	this->ptr = new int[n];
	this->n = n;
	for (int i = 0 ; i < n ; i++){
		this->ptr[i] = i;
	}
}

void Vector::copia(const Vector &v){
	// Reservar tanto numero como tenga v. 
	this->ptr = new int[v.n];
	
	// Copiar el tamaño
	this->n = v.n;
	
	// Copiar los numeros
	for (int i = 0 ; i < n ; i++){
		this->ptr[i] = v.ptr[i];
	}
}

Vector::Vector(const Vector &v){
	// C.Copia
	
	this->copia(v);
}

Vector & Vector::operator=(const Vector &v){
	
	// Liberar primero el destino
	delete [] this->ptr;
	
	this->copia(v);
	
	return *this;
}

void Vector::imprimir()
{
	std::cout << "[";
	for (int i = 0 ; i < this->n ; i++)
		std::cout << this->ptr[i] << " ";
	std::cout << "]" << std::endl;
}



Vector::~Vector()
{
	delete [] this->ptr;
	this->ptr = nullptr;
}
