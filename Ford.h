#ifndef FORD_H
#define FORD_H

#include "Car.h"


class Ford : public Car{
    private:
        int badgeNumber;
        float litresOfFuel;
    public:
        Ford();
        Ford(int badgeNumber, int price);
        void refuel(int litres);
        void drive(int kms);
        void set_badgeNumber(int badgeNumber);
        int get_badgeNumber();
        void set_litresOfFuel(float litresOfFuel);
        float get_litresOfFuel();

};

#endif