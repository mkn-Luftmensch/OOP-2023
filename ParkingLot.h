#ifndef PARKINGLOT_H
#define	PARKINGLOT_H

#include "Vehicle.h"
// #include <bits/stdc++.h>

class ParkingLot
{
    protected:
        Vehicle* vehicles;   
        int maxCapacity;
        int currentVehicles;
    public:
        ParkingLot(int capacity);
        int getCount();
        void parkVehicle(Vehicle* vehicle);
        void unparkVehicle(int id);
        ~ParkingLot();
};


#endif