#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
    private:
        int powerRating;
        bool isOn;
    public:
        Appliance();
        Appliance(int powerRating);
        void turnOn();
        void turnOff();
        void setPowerRating(int powerRating);
        int getPowerRating();
        virtual double getPowerConsumption() = 0;
};


#endif