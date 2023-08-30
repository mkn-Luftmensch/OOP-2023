#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() : ID(0), timeOfEntry(0){};

Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = time(nullptr);
}
int Vehicle::getID() {
    return ID;
}

int Vehicle::getParkingDuration() {
    return 0;
}