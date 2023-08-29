#include "Var.h"
using namespace std;

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() {
    return  (time(nullptr) - timeOfEntry)*0.9;
}
