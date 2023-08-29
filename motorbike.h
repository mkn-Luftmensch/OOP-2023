#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "vehicle.h"

class Motorbike : public Vehicle {
    public:
        Motorbike(int id);
        int getParkingDuration() override;
};

#endif