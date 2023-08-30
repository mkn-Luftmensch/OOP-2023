#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int maxCapacity = 10;
    ParkingLot parkingLot(maxCapacity);

    while (parkingLot.getCount() < maxCapacity) {
        int vehicleType;
        cout << "Enter vehicle type (1: Car, 2: Bus, 3: Motorbike): ";
        cin >> vehicleType;

        int vehicleID;
        cout << "Enter vehicle ID: ";
        cin >> vehicleID;

        Vehicle* newVehicle;
        if (vehicleType == 1) {
            newVehicle = new Car(vehicleID);
        } else if (vehicleType == 2) {
            newVehicle = new Bus(vehicleID);
        } else if (vehicleType == 3) {
            newVehicle = new Motorbike(vehicleID);
        } else {
            cout << "Invalid vehicle type. Skipping..." << endl;
            continue;
        }

        parkingLot.parkVehicle(newVehicle);
    }

    int unparkVehicleID;
    cout << "Enter vehicle ID to unpark: ";
    cin >> unparkVehicleID;
    parkingLot.unparkVehicle(unparkVehicleID);

    return 0;
}
