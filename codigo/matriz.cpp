#include <cmath>
#include <ctime>
#include <iostream>
#include <stdexcept>

class Matriz {
	
	int filas, cols;
	int **datos;
	
	public:
		Matriz(int filas = 10, int cols = 10);
		//Matriz(const Matriz &);
		//Matriz & operator=(const Matriz &);
		void imprimir();
		Matriz operator+(const Matriz &m);		
		~Matriz();	
};


Matriz::Matriz(int filas, int cols){
	this->filas = filas;
	this->cols = cols;
	
	this->datos = new int *[filas];
	for (int i = 0 ; i < filas ; i++){
		this->datos[i] = new int[cols];
		
		for (int j = 0 ; j < cols ; j++){
			this->datos[i][j] = rand() % 100;
		}
	}
}

void Matriz::imprimir(){
	for (int i = 0 ; i < filas ; i++){			
		for (int j = 0 ; j < cols ; j++){
			std::cout << this->datos[i][j]  << "\t";
		}
		std::cout << std::endl;
	}
}

Matriz Matriz::operator+(const Matriz &m){
	if ((this->filas != m.filas) || (this->cols != m.cols)){
		throw std::invalid_argument("Son matrices de distinto tamaño ...");
	}
	
	Matriz aux(m.filas, m.cols);
	for (int i = 0 ; i < m.filas ; i++){
		for (int j = 0 ; j < m.cols ; j++){
			aux.datos[i][j] = m.datos[i][j] + this->datos[i][j];
		}
	}
	//aux.imprimir();
	//std::cout << std::endl;
	
	return aux;
}

Matriz::~Matriz(){
	for (int i = 0 ; i < filas ; i++){
		delete [] this->datos[i];
		this->datos[i] = nullptr;
	}
		
	delete [] this->datos;
	this->datos = nullptr;
	this->filas = 0;
	this->cols = 0;
}


int main(){
	std::srand(std::time(NULL));
	
	Matriz m1(3,3);
	Matriz m2(3,3);
	Matriz suma = m1 + m2;
	
	//suma = m1 + m2;	
	m1.imprimir();
	std::cout << std::endl;
	
	m2.imprimir();
	std::cout << std::endl;

	suma.imprimir();
	std::cout << std::endl;

}
