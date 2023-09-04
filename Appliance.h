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
        void set_powerRating(int powerRating);
        int get_powerRating();
        bool get_isOn();
        virtual double getPowerConsumption();
};


#endif