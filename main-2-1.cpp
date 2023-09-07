#include "Tesla.h"

#include <bits/stdc++.h>
using namespace std;

int main() {
    Tesla myTesla('N', 1700);
    cout << myTesla.get_batteryPercentage()<<endl;
    cout << myTesla.get_model() << endl;
    cout << myTesla.get_emissions() << endl;
    myTesla.drive(979);
    cout << myTesla.get_emissions() << endl;
    cout << myTesla.get_batteryPercentage() << endl;
    myTesla.chargeBattery(10);
    cout << myTesla.get_batteryPercentage() << endl;
}