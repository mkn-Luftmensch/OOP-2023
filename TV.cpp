#include "TV.h"

TV::TV() : Appliance(){}
TV::TV(int powerRating, double screenSize) : Appliance(powerRating){
    this->screenSize = screenSize;
}

void TV::setScreenSize(double screenSize){
    this->screenSize = screenSize;  
}

double TV::getScreenSize(){
    return this->screenSize;
}

double TV::getPowerConsumption(){
    return get_powerRating()*(this->screenSize / 10);
}

