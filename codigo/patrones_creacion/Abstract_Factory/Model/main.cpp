#include <iostream>

#include "AbstractFactory.h"
#include "FactoryApple.h"
#include "FactorySamsung.h"
#include "SmartPhone.h"
#include "Tablet.h"

typedef enum {SAMSUNG, APPLE} Fabricante;

AbstractFactory *createFactory(Fabricante fab){
	switch(fab){
		case SAMSUNG:
			return new FactorySamsung();
			
		case APPLE:
			return new FactoryApple();
			
		default:
			return new FactorySamsung();
	}
}


int main(int argc, char** argv) {
	AbstractFactory *factoria = createFactory(APPLE);
	SmartPhone *smartPhone = factoria->createSmartPhone();
	Tablet *tablet = factoria->createTablet();
	
	smartPhone->call();
	tablet->internet();
	
	delete smartPhone; smartPhone=nullptr;
	delete tablet;  tablet=nullptr;
	delete factoria; factoria=nullptr;
	
	return 0;
}
