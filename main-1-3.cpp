#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include <iostream>
using namespace std;

int main(){

    ParkingLot parkinglot(10);
    int id, typeVehicle;
    for(int i=0; i<10; i++){
        cout << "Type of vehicle (1: Car, 2:Bus, 3:Motorbike): ";
        cin >> typeVehicle;
        cout << "ID: ";
        cin >> id;
        if(typeVehicle == 1) {
            parkinglot.parkVehicle(new Car(id));
        }
        if(typeVehicle == 2) {
            parkinglot.parkVehicle(new Bus(id));
        }
        if(typeVehicle == 3) {
            parkinglot.parkVehicle(new Motorbike(id));
        }
    }

    cout << "Overstaying vehicles: " << parkinglot.countOverstayingVehicles(5) << endl;

    return 0;
}