#include "Appliance.h"
#include "Fridge.h"
#include <bits/stdc++.h>
using namespace std;

int main(){

    Fridge fridge(100, 17);
    fridge.turnOn();
    cout << fridge.getVolume() << endl;
    cout << fridge.get_powerRating() << endl;
    cout << fridge.getPowerConsumption() << endl;

    return 0;
}