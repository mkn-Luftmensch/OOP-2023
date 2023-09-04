#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <bits/stdc++.h>
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