#include "Agenda.h"

Agenda::Agenda()
{
}

void Agenda::addCita(Date fecha, Hora hora, std::string evento){
	this->citas[fecha][hora] = evento;
}

void Agenda::print(){
	
}


void Agenda::print(Date fecha){
	
}

void Agenda::print(Date fecha, Hora hora){
	
}

Agenda::~Agenda()
{
}
