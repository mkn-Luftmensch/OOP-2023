#include "Motorbike.h"
using namespace std;

Motorbike::Motorbike(int id) : Vehicle(id) {}
int Motorbike::getParkingDuration() {
    return static_cast<int> (time(nullptr)-timeOfEntry)*0.85;
}
