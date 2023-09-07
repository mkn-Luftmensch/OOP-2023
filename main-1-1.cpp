#include "Car.h"
#include <bits/stdc++.h>
using namespace std;

int main(){

    Car myCar1(1000);

    cout << myCar1.get_price() << endl;

    myCar1.set_emissions(10);
    cout << myCar1.get_emissisons() << endl;

    myCar1.drive(10);
    cout << myCar1.get_emissisons() << endl;

    return 0;
}