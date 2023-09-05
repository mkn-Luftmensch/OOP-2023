#include <bits/stdc++.h>
#include "Appliance.h"

using namespace std;

int main(){
    Appliance* appliance = new Appliance(100);
    cout << appliance->getPowerConsumption();
    appliance->turnOn();
    delete appliance;
    return 0;
    

}