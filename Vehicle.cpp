#include "Vehicle.h"

Vehicle::Vehicle(int ID) : _ID(ID), _timeOfEntry(0){}
int Vehicle::getID(){
    return _ID;
}

// int Vehicle::getParkingDuration() {
//     return time(nullptr)-_timeOfEntry;
// }