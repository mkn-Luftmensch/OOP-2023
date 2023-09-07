#include "Tesla.h"

Tesla::Tesla() : Car(), batteryPercentage(100){}
Tesla::Tesla(char model, int price) : Car(price), batteryPercentage(100){
    this->model = model;
}
void Tesla::chargeBattery(int mins){
    batteryPercentage+=(0.5*mins);
}

void Tesla::drive(int kms){
    float batteryLost = 0.2*kms;
    batteryPercentage-=batteryLost;
    if(batteryPercentage>=0){
        emissions=74*kms;
    }
    else {
        emissions = 74*500;
    }
}

void Tesla::set_model(char model){this->model=model;}
char Tesla::get_model(){return this->model;}
void Tesla::set_batteryPercentage(float batteryPercentage){this->batteryPercentage=batteryPercentage;}
float Tesla::get_batteryPercentage(){
    if(batteryPercentage>100) batteryPercentage=100;
    if(batteryPercentage<0) batteryPercentage=0;
    return batteryPercentage;
}