/**
 * Project Untitled
 */


#ifndef _FACTORYAPPLE_H
#define _FACTORYAPPLE_H

#include "AbstractFactory.h"


class FactoryApple: public AbstractFactory {
public: 
    
SmartPhone * createSmartPhone();
    
Tablet * createTablet();
};

#endif //_FACTORYAPPLE_H