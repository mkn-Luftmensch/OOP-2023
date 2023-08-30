#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
    public:
        Motorbike(int id);
        int getParkingDuration() ;
};

#endif
