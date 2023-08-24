#ifndef SUBDIVISION_H
#define SUBDIVISION_H

#include "House.h"
#include <bits/stdc++.h>
using namespace std;

class Subdivision {
    private:
        string _subName;
        int _size;
        int numHouses;
        House* houses;
    public:
        Subdivision();
        Subdivision(string subName, int size);
        int get_num_houses();
        string get_subdiv_name();
        House* get_Houses();
        bool add_House(House new_house);
        ~Subdivision();
};

#endif