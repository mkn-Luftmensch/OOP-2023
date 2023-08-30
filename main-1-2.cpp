#include <bits/stdc++.h>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {
    ParkingLot park(10);
    string vhc;
    int id;
    for(int i=0; i<10; i++){
        cout << "Type of vehicles: \n";
        cin >> vhc;
        if(vhc == "car") {
            park.parkVehicle(new Car(i+1));
        }
        if(vhc == "bus") {
            park.parkVehicle(new Bus(i+1));
        }
        if(vhc == "motorbike") {
            park.parkVehicle(new Motorbike(i+1));
        }
    }
    vhc = "yes";
    cout << "Unpark? \n";
    cin >> vhc;
    while(vhc == "yes"){
        cout << "ID? \n";
        cin >> id;
        park.unparkVehicle(id);
    }

    return 0;
}