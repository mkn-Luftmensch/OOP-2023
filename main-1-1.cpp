#include "Car.h"
#include <bits/stdc++.h>
using namespace std;

int main(){

    Car myCar(1000);

    cout << myCar.get_price() << endl;

    myCar.set_emissions(10);
    cout << myCar.get_emisisons() << endl;

    myCar.drive(10);
    cout << myCar.get_emisisons() << endl;


    return 0;
}