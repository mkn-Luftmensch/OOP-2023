#ifndef TESLA_H
#define	TESLA_H
#include "Car.h"

class Tesla : public Car {
    private:
        char model;
        float batteryPercentage;
    public:
        Tesla();
        Tesla(char model, int price);
        void chargeBattery(int mins);
        void drive(int kms);
        void set_model(char model);
        char get_model();
        void set_batteryPercentage(float batteryPercentage);
        float get_batteryPercentage();
};


#endif