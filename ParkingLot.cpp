#include "ParkingLot.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), vehicles(new Vehicle[maxCapacity]), currentVehicles(0){}

int ParkingLot::getCount() {return currentVehicles;}

void ParkingLot::parkVehicle(Vehicle* vehicle){
    if (currentVehicles < maxCapacity) {
        vehicles[currentVehicles] = *vehicle;
        currentVehicles++;    
    } else cout << "The lot is full";
}

void ParkingLot::unparkVehicle(int id){
    bool check = false;
    for(int i = 0; i<currentVehicles; i++){
        if ((vehicles[i].getID()) == id){
            delete &vehicles[id];
            check = true;
        }
    }
    if(check = false) cout << "Vehicle not in the lot";
}

ParkingLot::~ParkingLot(){
    delete[] vehicles;
}