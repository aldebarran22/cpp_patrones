/**
 * Project Untitled
 */


#ifndef _GESTOR_H
#define _GESTOR_H

class Gestor {
public: 
    
/**
 * @param gestor
 */
void Gestor(Gestor * gestor);
    
/**
 * @param peticion
 */
virtual void void trasmitir(Peticion peticion) = 0;
protected: 
    Gestor * sucesor;
};

#endif //_GESTOR_H