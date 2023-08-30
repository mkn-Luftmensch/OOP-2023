#include "Car.h"
using namespace std;

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() {
    return (time(nullptr) - timeOfEntry)*0.9; //statics_cast<int> = convert to int
}
