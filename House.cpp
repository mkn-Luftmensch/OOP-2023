#include "House.h"
#include <bits/stdc++.h>
using namespace std;

House::House(): _lotNumber(0), _ownerName(""){}
House::House(string ownerName, int lotNumber): _ownerName(ownerName), _lotNumber(lotNumber){}
string House::get_owner_name(){
    return _ownerName;
}
int House::get_lot_number(){
    return _lotNumber;
}

House::~House(){}