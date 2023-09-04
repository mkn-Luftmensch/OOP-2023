#include "Bus.h"

Bus::Bus(int ID) : Vehicle(ID) {
    _timeOfEntry = time(nullptr);
}

int Bus::getParkingDuration(){
    return (time(nullptr)-_timeOfEntry)*0.75;
}

