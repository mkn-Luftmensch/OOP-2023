#ifndef CAR_H
#define CAR_H

class Car {
    protected:
        int price;
        int emissions;
    public:
        Car();
        Car(int price);
        virtual void drive(int kms);
        void set_price(int price);
        int get_price();
        // void set_emissions(int emissions);
        int get_emisisons();
};

#endif