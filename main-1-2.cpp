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
        std::cout << "Enter vehicle type (1: Car, 2: Bus, 3: Motorbike): ";
        std::cin >> vehicleType;

        int vehicleID;
        std::cout << "Enter vehicle ID: ";
        std::cin >> vehicleID;

        Vehicle* newVehicle;
        if (vehicleType == 1) {
            newVehicle = new Car(vehicleID);
        } else if (vehicleType == 2) {
            newVehicle = new Bus(vehicleID);
        } else if (vehicleType == 3) {
            newVehicle = new Motorbike(vehicleID);
        } else {
            std::cout << "Invalid vehicle type. Skipping..." << std::endl;
            continue;
        }

        parkingLot.parkVehicle(newVehicle);
    }

    int unparkVehicleID;
    std::cout << "Enter vehicle ID to unpark: ";
    std::cin >> unparkVehicleID;
    parkingLot.unparkVehicle(unparkVehicleID);

    return 0;
}
