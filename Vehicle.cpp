#include "Vehicle.h"

Vehicle::Vehicle(int ID) : _ID(ID), _timeOfEntry(0){}
int Vehicle::getID(){
    return _ID;
}

