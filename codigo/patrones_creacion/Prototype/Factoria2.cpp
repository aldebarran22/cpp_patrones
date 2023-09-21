#include <stdexcept>
#include <iostream>

#include "Factoria2.h"
#include "Triangulo.h"
#include "Circulo.h"

Factoria2::Factoria2()
{
	// Inicializar claves del mapa, pero sin instanciar el objeto:
	for (int i = TRIANGULO ; i <= CIRCULO ; i++){
		TipoProto t = static_cast<TipoProto>(i);
		this->prototipos[t] = nullptr;
	}
}

Figura *Factoria2::getPrototipo(TipoProto tipo){
	// Crea el objeto bajo demanda. Comprobar si ya estaba creado o no.
	
	if (this->prototipos[tipo] == nullptr){
		// No se ha creado todavía:
		switch(tipo){
			case TRIANGULO:
				this->prototipos[tipo] = new Triangulo;
				break;
				
			case CIRCULO:
				this->prototipos[tipo] = new Circulo;
				break;
			
			default:
				throw std::invalid_argument("No se reconoce el prototipo ...");
		}		
	}
	
	this->prototipos.at(tipo)->clone();
}
		
void Factoria2::print(){
	// Comprobar si está instanciado antes de pintar:
	
	for (auto it = this->prototipos.begin();  it != this->prototipos.end() ; it++){
		if (it->second != nullptr){
			it->second->draw();
			
		} else {
			std::cout << "Prototipo: " << toString(it->first) << " no se ha creado" << std::endl;
		}
	}
}

Factoria2::~Factoria2()
{
	// Comprobar si está instanciado antes de liberar:
		for (auto it = this->prototipos.begin();  it != this->prototipos.end() ; it++){
			if (it->second != nullptr){
				delete it->second;
				it->second = nullptr;
			}
		}
}
