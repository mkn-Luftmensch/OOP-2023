#include "Motorbike.h"

Motorbike::Motorbike(int ID) : Vehicle(ID) {
    _timeOfEntry = time(nullptr);
}

int Motorbike::getParkingDuration() {
    return (time(nullptr)-_timeOfEntry)*0.85;
}