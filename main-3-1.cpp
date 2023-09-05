#include "House.h"
#include "Fridge.h"
#include "Appliance.h"
#include "TV.h"

#include <bits/stdc++.h>
using namespace std;

int main(){

    House house(5);

    Fridge fridge(100, 17);
    TV tv(100, 22);

    cout << fridge.getPowerConsumption() << endl;
    cout << tv.getPowerConsumption() << endl;

    house.addAppliance(&fridge);
    house.addAppliance(&tv);

    cout << house.getTotalPowerConsumption() << endl;

    return 0;

    // if you don't use Fridge fridge = new Fridge(100), you don't need to delete each element in the array 
    // because it is not dynamically created. You only need to delete the array by delete[] appliances

}