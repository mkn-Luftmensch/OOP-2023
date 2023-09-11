#include "Ford.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    Ford myFord(12, 1980);
    cout << myFord.get_badgeNumber() << endl;
    myFord.drive(1000);
    cout << myFord.get_litresOfFuel() << endl;
    myFord.refuel(400);
    cout << myFord.get_litresOfFuel() <<endl;

}