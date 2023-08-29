#ifndef VEHICLE_H
#define VEHICLE_H

#include<ctime>
using namespace std;

class Vehicle {
    protected:
        time_t timeOfEntry;
        int ID;
    public:
        Vehicle(int id);
        int getID() const;
        virtual int getParkingDuration() const = 0;
};

#endif
