#include "Person.h"

Person::Person(std::string name) {
    this->name = name;
}

Person::Person():Person("") {

}

