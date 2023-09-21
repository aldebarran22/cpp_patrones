/**
 * Project Untitled
 */


#ifndef _PETICION_H
#define _PETICION_H

#include <string>

typedef enum {SMS, EMAIL, WHATSAPP} TMensaje;


class Peticion {
public: 
    
/**
 * @param tipo
 * @param mensaje
 */
Peticion(TMensaje tipo, std::string mensaje);
TMensaje getTipo(){ return this->tipo; }
std::string getMensaje(){ return this->mensaje; }
~Peticion();
    
private: 
    TMensaje tipo;
    std::string mensaje;
};

#endif //_PETICION_H
