#include "House.h"

House::House() : numAppliances(0), currentAppliances(0){}
House::House(int numAppliances){
    currentAppliances=0;
    this->numAppliances = numAppliances;
    appliances = new Appliance*[this->numAppliances]; //
}

bool House::addAppliance(Appliance* appliance){
    if(currentAppliances < numAppliances) {
        appliances[currentAppliances] = appliance;
        currentAppliances++;
        return true;
    }
    else return false;
}

double House::getTotalPowerConsumption(){
    double totalConsumption = 0;
    for (int i=0; i<currentAppliances; i++){
        totalConsumption+=(appliances[i]->getPowerConsumption());
    }
    return totalConsumption;
}

House::~House(){
    // for (int i=0; i<currentAppliances; ++i ){
    //     delete appliances[i]; 
    // }
    delete[] appliances;
}