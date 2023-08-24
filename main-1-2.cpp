#include "Subdivision.h"
#include <bits/stdc++.h>
using namespace std;

int main(){
    Subdivision mySubDiv("MySubDiv", 3);
    House house1("Mike", 1);
    House house2("Jane", 2);
    House house3("Keth", 3);
    House house4("Sad", 4);
    cout << "Current num house: " << mySubDiv.get_num_houses() << endl;
    cout << "add house 1? " << mySubDiv.add_House(house1) << endl;
    cout << "add house 2? " << mySubDiv.add_House(house2) << endl;
    cout << "add house 3? " << mySubDiv.add_House(house3) << endl;
    cout << "add house 4? " << mySubDiv.add_House(house4) << endl;
    cout << "Current num house: " << mySubDiv.get_num_houses() << endl;
    
    cout << "subdiv name: " << mySubDiv.get_subdiv_name() << endl;
    
    House* allHouses = mySubDiv.get_Houses();
    for (int i=0; i<mySubDiv.get_num_houses(); i++){
        cout << allHouses[i].get_owner_name() << " " << allHouses[i].get_lot_number() << endl;
    }

    return 0;
}