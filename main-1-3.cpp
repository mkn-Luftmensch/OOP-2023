#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);
    Vehicle* newVehicle;

    for (int i=1; i<=5; i++) {
        newVehicle = new Car(i);
        lot.parkVehicle(newVehicle);
    }
    for (int i=6; i<=8; i++) {
        newVehicle = new Bus(i);
        lot.parkVehicle(newVehicle);
    }
    for (int i=9; i<=10; i++) {
        newVehicle = new Motorbike(i);
        lot.parkVehicle(newVehicle);
    }
    cout << lot.countOverstayingVehicles(15);
    
    return 0;
}