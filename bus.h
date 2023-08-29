#ifndef BUS_H
#define BUS_H

#include "vehicle.h"

class Bus : public Vehicle {
    public: 
        Bus(int id);
        int getParkingDuration() override;
};

#endif