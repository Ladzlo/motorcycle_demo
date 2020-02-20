#pragma once

#include "motor.h"
#include "battery.h"

namespace Vehicles {

    class Motorcycle {

        public:
            Motorcycle(void);

        private:
        Motor motor;
        Battery battery;
    };
};