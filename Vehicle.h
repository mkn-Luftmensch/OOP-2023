#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
using namespace std;

class Vehicle {
    protected:
        time_t _timeOfEntry;
        int _ID;
    public:
        Vehicle(int ID);
        int getID();
        virtual int getParkingDuration() = 0;
};

#endif