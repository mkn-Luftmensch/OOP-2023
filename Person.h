#include<iostream>
struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
    
};

