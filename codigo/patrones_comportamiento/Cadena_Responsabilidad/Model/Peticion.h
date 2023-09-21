/**
 * Project Untitled
 */


#ifndef _PETICION_H
#define _PETICION_H

class Peticion {
public: 
    
/**
 * @param tipo
 * @param mensaje
 */
void Peticion(int tipo, string mensaje);
protected: 
    
void Peticion();
private: 
    int tipo;
    string mensaje;
};

#endif //_PETICION_H