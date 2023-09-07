#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;
int main() {

    int numVehicles, numCars, numBuses, numMotorbikes;
    cout << "Enter the number of vehicles: ";
    cin >> numVehicles;
    Vehicle* vehicles[numVehicles];
    int vehicleCount = 0;
    
    cout << "Enter the number of cars: ";
    cin >> numCars;
    cout << "Enter the number of buses: ";
    cin >> numBuses;
    cout << "Enter the number of motorbikes: ";
    cin >> numMotorbikes;
    for (int i = 0; i < numCars; ++i) {
        vehicles[vehicleCount++] = new Car(i+1);
    }
    for (int i = 0; i < numBuses; ++i) {
        vehicles[vehicleCount++] = new Bus(i+1);
    }
    for (int i = 0; i < numMotorbikes; ++i) {
        vehicles[vehicleCount++] = new Motorbike(i+1);
    }

    for (int i = 0; i < numVehicles; ++i) {
        cout << "Vehicle ID: " << vehicles[i]->getID() << ", Parking Duration: " << vehicles[i]->getParkingDuration() << " seconds" << endl;
    }
    for (int i = 0; i < numVehicles; ++i) {
        delete vehicles[i];
    }
    return 0;
}

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

    

