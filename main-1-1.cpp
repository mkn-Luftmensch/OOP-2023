#include <bits/stdc++.h>
#include "vehicle.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"
using namespace std;

int main(){
    int numCars, numBuses, numMotorbikes, numVehicles;
    cout << "Enter total number of vehicles: ";
    cin >> numVehicles;
    Vehicle* vehicles[numVehicles];

    cout << "Enter total number of cars: ";
    cin >> numCars;
    for(int i = 0 ;i<numCars;++i){
        vehicles[i]= new Car(i);
    }

    cout << "Enter total number of buses: ";
    cin >> numBuses;
    for(int i = 0 ;i<numBuses;++i){
        vehicles[i]= new Bus(i);
    }

    cout << "Enter total number of motorbikes: ";
    cin >> numMotorbikes;
    for(int i = 0 ;i<numMotorbikes;++i){
        vehicles[i]= new Motorbike(i);
    }

    for (int i=0; i<numVehicles; i++) {
        cout << "The parking duration of vehicle " << vehicles[i]->getID() << " is " << vehicles[i]->getParkingDuration() << " seconds \n"; 
    }
    // delete[] vehicles;
    return 0;
}