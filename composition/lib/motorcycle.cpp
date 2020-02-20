#include "motorcycle.h"

#include <iostream>

namespace Vehicles
{
    //Explicit call to constructor Battery(double) using
    //constructor intialization list
    Motorcycle::Motorcycle(void)
        : battery(12.0), motor(900) {
        std::cout << "Constructing motorcycle" << std::endl;

    }
    
};