#include <cmath>
#include <ctime>
#include <iostream>
#include <stdexcept>

template <class T> class Matriz {
	
	//friend Matriz operator+(const Matriz &m, const Matriz &m2){
	
	int filas, cols;
	T **datos;
	T val;
	
	public:
		Matriz(T val, int filas = 10, int cols = 10);
		//Matriz(const Matriz &);
		//Matriz & operator=(const Matriz &);
		void imprimir();
		Matriz<T> operator+(const Matriz<T> &m);		
		~Matriz();	
};


template <class T> Matriz<T>::Matriz(T val, int filas, int cols){
	this->filas = filas;
	this->cols = cols;
	this->val = val;
	
	this->datos = new int *[filas];
	for (int i = 0 ; i < filas ; i++){
		this->datos[i] = new int[cols];
		
		for (int j = 0 ; j < cols ; j++){
			this->datos[i][j] = val;
		}
	}
}

template <class T> void Matriz<T>::imprimir(){
	for (int i = 0 ; i < filas ; i++){			
		for (int j = 0 ; j < cols ; j++){
			std::cout << this->datos[i][j]  << "\t";
		}
		std::cout << std::endl;
	}
}

template <class T> Matriz<T> Matriz<T>::operator+(const Matriz<T> &m){
	if ((this->filas != m.filas) || (this->cols != m.cols)){
		throw std::invalid_argument("Son matrices de distinto tamaño ...");
	}
	
	Matriz aux(m.val, m.filas, m.cols);
	for (int i = 0 ; i < m.filas ; i++){
		for (int j = 0 ; j < m.cols ; j++){
			aux.datos[i][j] = m.datos[i][j] + this->datos[i][j];
		}
	}
	//aux.imprimir();
	//std::cout << std::endl;
	
	return aux;
}

template <class T>  Matriz<T>::~Matriz(){
	for (int i = 0 ; i < filas ; i++){
		delete [] this->datos[i];
		this->datos[i] = nullptr;
	}
		
	delete [] this->datos;
	this->datos = nullptr;
	this->filas = 0;
	this->cols = 0;
}


