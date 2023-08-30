#include "Motorbike.h"
using namespace std;

Motorbike::Motorbike(int id) : Vehicle(id) {}
int Motorbike::getParkingDuration() {
    return (time(nullptr)-timeOfEntry)*0.85;
}
