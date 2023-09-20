/**
 * Project Untitled
 */


#include "FactorySamsung.h"
#include "S20.h"
#include "GalaxyA.h"

/**
 * FactorySamsung implementation
 */


/**
 * @return SmartPhone *
 */
SmartPhone * FactorySamsung::createSmartPhone() {
    return new S20();
}

/**
 * @return Tablet *
 */
Tablet * FactorySamsung::createTablet() {
    return new GalaxyA();
}
