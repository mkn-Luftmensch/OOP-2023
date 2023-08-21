#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include <string>
#include "Musician.h"

class Orchestra {
    private:
        int _size;
        std::string _instrument;
        Musician* _members = new Musician[_size];
    public:
        Orchestra();
        Orchestra(int size);
        int get_current_number_of_members();
        bool has_instrument(std::string instrument);
        Musician* get_members();
        bool add_musicians(Musician new_musician);
        ~Orchestra();
}; 

#endif 