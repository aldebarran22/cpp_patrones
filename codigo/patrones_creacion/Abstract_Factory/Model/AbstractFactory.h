/**
 * Project Untitled
 */


#ifndef _ABSTRACTFACTORY_H
#define _ABSTRACTFACTORY_H

class AbstractFactory {
public: 
    
virtual SmartPhone * createSmartPhone() = 0;
    
virtual Tablet * createTablet() = 0;
};

#endif //_ABSTRACTFACTORY_H