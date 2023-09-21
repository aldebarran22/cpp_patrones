#include <stdexcept>

#include "Factoria2.h"

Factoria2::Factoria2()
{
	// Inicializar claves del mapa, pero sin instanciar el objeto:
	for (TipoProto i = TRIANGULO ; i <= CIRCULO ; i++){
		this->prototipos[i] = nullptr;
	}
}

Figura *Factoria2::getPrototipo(TipoProto tipo){
	// Crea el objeto bajo demanda. Comprobar si ya estaba creado o no.
	
	if (this->prototipos[tipo] == nullptr){
		// No se ha creado todav�a:
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
	// Comprobar si est� instanciado antes de pintar:
	
	for (auto it = this->prototipos.begin();  it != this->prototipos.end() ; it++){
		if (it->second != nullptr){
			it->second->draw();
			
		} else {
			std::cout << "Prototipo: " << it->first << " no se ha creado" << std::endl;
		}
	}
}

Factoria2::~Factoria2()
{
	// Comprobar si est� instanciado antes de liberar:
		for (auto it = this->prototipos.begin();  it != this->prototipos.end() ; it++){
			if (it->second != nullptr){
				delete it->second;
				it->second = nullptr;
			}
		}
}
