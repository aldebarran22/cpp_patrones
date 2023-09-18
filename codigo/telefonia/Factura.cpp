/**
 * Project Untitled
 */


#include "Factura.h"

/**
 * Factura implementation
 */


/**
 * @param Servicio *
 * @return void
 */
void Factura::addServicio(Servicio *s) {
    this->servicios.push_back(s);
}


void Factura::imprimir(){
	double total = 0;
	double tarifa = 0;
	
	for (Servicio *s : this->servicios){
		tarifa = s->calcularTarifa();
		total += tarifa;
		std::cout << *s <<  " Tarifa: " << tarifa << std::endl;			
	}
	std::cout << "Total: " << total << std::endl;
}


Factura::~Factura(){
	for (int i = 0 ; i < this->servicios.size() ; i++){
		delete this->servicios.at(i);
		this->servicios.at(i) = nullptr;
	}
}
