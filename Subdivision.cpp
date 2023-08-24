#include "Subdivision.h"
#include <bits/stdc++.h>
using namespace std;

Subdivision::Subdivision(): _subName(""), _size(0), numHouses(0){}
Subdivision::Subdivision(string subName, int size): _subName(subName), _size(size), houses(new House[size]), numHouses(0){}
int Subdivision::get_num_houses(){return numHouses;}
string Subdivision::get_subdiv_name(){return _subName;}
House * Subdivision::get_Houses(){return houses;}
bool Subdivision::add_House(House new_house){
    if (numHouses < _size) {
        houses[numHouses] = new_house;
        numHouses++;
        return true;
    }
    else return false;
}
Subdivision::~Subdivision(){
    delete[] houses;
}
