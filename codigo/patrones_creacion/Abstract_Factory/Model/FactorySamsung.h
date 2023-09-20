/**
 * Project Untitled
 */


#ifndef _FACTORYSAMSUNG_H
#define _FACTORYSAMSUNG_H

#include "AbstractFactory.h"


class FactorySamsung: public AbstractFactory {
public: 
    
SmartPhone * createSmartPhone();    
Tablet * createTablet();
};

#endif //_FACTORYSAMSUNG_H
