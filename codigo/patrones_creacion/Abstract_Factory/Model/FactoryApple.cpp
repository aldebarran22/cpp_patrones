/**
 * Project Untitled
 */


#include "FactoryApple.h"
#include "IPhoneX.h"
#include "IPad.h"

/**
 * FactoryApple implementation
 */


/**
 * @return SmartPhone *
 */
SmartPhone * FactoryApple::createSmartPhone() {
    return new IPhoneX();
}

/**
 * @return Tablet *
 */
Tablet * FactoryApple::createTablet() {
    return new IPad();
}
