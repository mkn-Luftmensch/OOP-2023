#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot() : maxCapacity(0), currentVehicles(0){}
ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentVehicles(0), vehicles(new Vehicle*[capacity]){}

int ParkingLot::getCount(){
    return currentVehicles;
}

void ParkingLot::parkVehicle(Vehicle* vehicle){
    if (currentVehicles < maxCapacity) {
        vehicles[currentVehicles] = vehicle;
        currentVehicles++;
    }
    else cout << "The lot is full";
}

void ParkingLot::unparkVehicle(int ID){
    for(int i=0; i<currentVehicles; i++){
        if(vehicles[i]->getID() == ID) {
            delete vehicles[i];
            vehicles[i] = vehicles[currentVehicles-1];
            currentVehicles--;
            return;
        }
    }
    cout << "Vehicle not in the lot";
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
    int count = 0;
    for(int i=0; i<currentVehicles; i++){
        if(vehicles[i]->getParkingDuration()>maxParkingDuration){
            count++;
        }
    }
    return count;
}

ParkingLot::~ParkingLot(){
    for (int i=0; i<currentVehicles; i++){
        delete vehicles[i];
    }
    delete[] vehicles;
}