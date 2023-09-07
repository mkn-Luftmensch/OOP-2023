#include "Tesla.h"

#include <bits/stdc++.h>
using namespace std;

int main() {
    Tesla myTesla('N', 1700);
    cout << myTesla.get_batteryPercentage()<<endl;
    cout << myTesla.get_model() << endl;
    myTesla.drive(600);
    cout << myTesla.get_emisisons() << endl;
    cout << myTesla.get_batteryPercentage() << endl;
    myTesla.chargeBattery(100);
    cout << myTesla.get_batteryPercentage() << endl;
}