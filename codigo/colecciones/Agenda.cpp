#include "Agenda.h"

Agenda::Agenda()
{
}

void Agenda::addCita(Date fecha, Hora hora, std::string evento){
	this->citas[fecha][hora] = evento;
}

void Agenda::print(){

	for (auto it = this->citas.begin() ; it != this->citas.end() ; it++){
		std::cout << "Fecha: " << it->first.toString() << std::endl;
		
		this->print(it->first);
	}
}


void Agenda::print(Date fecha){
	auto it = this->citas.find(fecha);
	
	if (it == this->citas.end()){
		// Buscar el día:
		std::cout << "No hay citas para el dia: " << fecha.toString() << std::endl;
	
	} else  {
		// Existe la fecha, se imprimen todas las horas:
			
		for (auto it2 = it->second.begin() ; it2 != it->second.end() ; it2++){
			std::cout << it2->first << " " << it2->second << std::endl;
		}
	}
}

void Agenda::print(Date fecha, Hora hora){
	
	auto it = this->citas.find(fecha);
	if (it == this->citas.end()){
		// Buscar el día:
		std::cout << "No hay citas para el dia: " << fecha.toString() << std::endl;
				 
	} else {
		// Buscar la hora dentro del dia:
		auto it2 = it->second.find(hora);
		
		if (it2 == it->second.end()){
			std::cout << "Hay citas para el dia: " << fecha.toString() << " pero no a la hora: " << hora << std::endl;
			
		} else {
			std::cout << "Evento: " << it2->second  << std::endl;
		}
	}  
	
	//std::cout << this->citas.at(fecha).at(hora) << std::endl;
}

Agenda::~Agenda()
{
}
