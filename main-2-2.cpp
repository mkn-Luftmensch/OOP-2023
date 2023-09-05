#include "Appliance.h"
#include "TV.h"
#include <bits/stdc++.h>
using namespace std;

int main(){

    TV tv(100, 22);
    tv.turnOn();
    cout << tv.getScreenSize() << endl;
    cout << tv.get_powerRating() << endl;
    cout << tv.getPowerConsumption() << endl;

    return 0;
}