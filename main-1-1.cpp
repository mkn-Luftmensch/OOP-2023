#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;
int main() {
    // vector<Vehicle*> vehicles;

    // int numCars, numBuses, numMotorbikes;
    // cout << "Enter the number of cars: ";
    // cin >> numCars;
    // cout << "Enter the number of buses: ";
    // cin >> numBuses;
    // cout << "Enter the number of motorbikes: ";
    // cin >> numMotorbikes;

    // for (int i = 0; i < numCars; ++i) {
    //     vehicles.push_back(new Car(i + 1));
    // }

    // for (int i = 0; i < numBuses; ++i) {
    //     vehicles.push_back(new Bus(i + 1));
    // }

    // for (int i = 0; i < numMotorbikes; ++i) {
    //     vehicles.push_back(new Motorbike(i + 1));
    // }

    // for (Vehicle* vehicle : vehicles) {
    //     cout << "Vehicle ID: " << vehicle->getID() << ", Parking Duration: " << vehicle->getParkingDuration() << " seconds" << endl;
    // }

    // // Clean up the allocated memory
    // for (Vehicle* vehicle : vehicles) {
    //     delete vehicle;
    // }

    // return 0;

    
    int maxVehicles = 100; // Set the maximum number of vehicles

    Vehicle* vehicles[maxVehicles]; // Declare an array of pointers to Vehicle

    int numCars, numBuses, numMotorbikes;
    std::cout << "Enter the number of cars: ";
    std::cin >> numCars;
    std::cout << "Enter the number of buses: ";
    std::cin >> numBuses;
    std::cout << "Enter the number of motorbikes: ";
    std::cin >> numMotorbikes;

    int vehicleCount = 0; // Keep track of the total number of vehicles

    for (int i = 0; i < numCars; ++i) {
        vehicles[vehicleCount++] = new Car(i + 1);
    }

    for (int i = 0; i < numBuses; ++i) {
        vehicles[vehicleCount++] = new Bus(i + 1);
    }

    for (int i = 0; i < numMotorbikes; ++i) {
        vehicles[vehicleCount++] = new Motorbike(i + 1);
    }

    for (int i = 0; i < vehicleCount; ++i) {
        Vehicle* vehicle = vehicles[i];
        std::cout << "Vehicle ID: " << vehicle->getID() << ", Parking Duration: " << vehicle->getParkingDuration() << " seconds" << std::endl;
    }

    // Clean up the allocated memory
    for (int i = 0; i < vehicleCount; ++i) {
        delete vehicles[i];
    }

    return 0;
}

