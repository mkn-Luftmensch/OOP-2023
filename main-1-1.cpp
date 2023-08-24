#include "House.h"
#include <bits/stdc++.h>
using namespace std;

int main(){
    House myHouse("Mike", 52);
    cout << myHouse.get_lot_number() << endl;
    cout << myHouse.get_owner_name() << endl;
    return 0;
}