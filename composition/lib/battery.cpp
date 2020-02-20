#include "battery.h"

#include <iostream>

namespace Vehicles
{
    Battery::Battery(double voltage){
        std::cout << "Constructing battery" << voltage << std::endl;
        this-> voltage = voltage

    }
    
};
