#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"

class House {
    private:
        Appliance** appliances;
        int numAppliances;
        int currentAppliances;
    public:
        House();
        House(int numAplliances);
        bool addAppliance(Appliance* appliance);
        double getTotalPowerConsumption();
        ~House();
};

#endif