#include "Ford.h"

Ford::Ford() : Car(), litresOfFuel(60){}
Ford::Ford(int badgeNumber, int price) : Car(price), litresOfFuel(60) {
    this->badgeNumber = badgeNumber;  
}

void Ford::drive(int kms){
    float litresUsed = kms*0.2;
    litresOfFuel = litresOfFuel-litresUsed;
    if(litresOfFuel>=0) emissions=234*kms;
    else emissions=300*234;
}

void Ford::refuel(int litres){
    litresOfFuel+=litres;
}

void Ford::set_badgeNumber(int badgeNumber){
    this->badgeNumber=badgeNumber;
}

int Ford::get_badgeNumber() {return badgeNumber;}

float Ford::get_litresOfFuel() {return litresOfFuel;}

void Ford::set_litresOfFuel(float litresOfFuel){
    this->litresOfFuel=litresOfFuel;
}
