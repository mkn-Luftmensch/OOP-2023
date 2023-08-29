#include "Bus.h"
using namespace std;

Bus::Bus(int id) : Vehicle(id){}
int Bus::getParkingDuration() const {
    return (time(nullptr)-timeOfEntry)*0.75;
}
