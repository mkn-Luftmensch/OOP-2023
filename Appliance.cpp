#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false){}
Appliance::Appliance(int powerRating) : powerRating(powerRating){}
void Appliance::turnOn(){
    isOn = true;  
}
void Appliance::turnOff(){
    isOn = false;
}
void Appliance::setPowerRating(int powerRating){
    this->powerRating=powerRating;  
}
int Appliance::getPowerRating(){
    return powerRating;
}


