#include <bits/stdc++.h>
#include "Appliance.h"

using namespace std;

int main(){
    Appliance* appliance = new Appliance(100);
    cout << appliance->getPowerConsumption() << endl;
    appliance->turnOn();
    cout << appliance->get_isOn() << endl;
    delete appliance;
    return 0;
    

}