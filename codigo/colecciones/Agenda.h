#ifndef AGENDA_H
#define AGENDA_H


#include <map>
#include <string>

#include "Date.h"
#include "Hora.h"

class Agenda
{	
	std::map<Date, std::map<Hora, std::string>> citas;
	
	public:
		Agenda();
		void addCita(Date, Hora, std::string);
		void print();
		void print(Date);
		void print(Date, Hora);
		~Agenda();
	protected:
};

#endif
