#include "Car.h"

Car::Car() : emissions(0), price(0) {}
Car::Car(int price) : emissions(0){
    this->price = price;
}

void Car::drive(int kms){
    emissions = 20 * kms;
}

void Car::set_price(int price){
    this->price=price;
}
void Car::set_emissions(int emissions){
    this->emissions=emissions;
}
int Car::get_price(){return price;}
int Car::get_emissisons(){return emissions;}
