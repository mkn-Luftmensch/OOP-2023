#include "Car.h"

Car::Car(int ID) : Vehicle(ID) {
    _timeOfEntry = time(nullptr);
}

int Car::getParkingDuration(){
    return (time(nullptr)-_timeOfEntry)*0.9;
}