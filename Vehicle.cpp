#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = time(nullptr);
}
int Vehicle::getID() const{
    return ID;
}
