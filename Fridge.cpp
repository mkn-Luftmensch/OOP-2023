#include "Fridge.h"

Fridge::Fridge() : Appliance(){}
Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating) {
    this->volume = volume; 
}

void Fridge::setVolume(double volume){
    this->volume = volume;
}

double Fridge::getVolume(){
    return this->volume;
}

double Fridge::getPowerConsumption(){
    return get_powerRating()*24*(this->volume/100);
}