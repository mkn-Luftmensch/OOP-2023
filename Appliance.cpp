#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false){}
Appliance::Appliance(int powerRating) : powerRating(powerRating){}
void Appliance::turnOn(){
    isOn = true;  
}
void Appliance::turnOff(){
    isOn = false;
}
void Appliance::set_powerRating(int powerRating){
    this->powerRating=powerRating;  
}
int Appliance::get_powerRating(){
    return powerRating;
}
double Appliance::getPowerConsumption(){
    return 0;
}
bool Appliance::get_isOn(){
    return this->isOn;
}


