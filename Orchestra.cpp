#include "Orchestra.h"
#include "Musician.h"

Orchestra::Orchestra() : _size(0), current_members(0) {}
Orchestra::Orchestra(int size) : _size(size), current_members(0) {
    _members = new Musician[_size];
}
int Orchestra::get_current_number_of_members() {
    return current_members;
}
bool Orchestra::has_instrument(std::string instrument) {
    for(int i=0; i<_size; i++){
        if(_members[i].get_instrument() == instrument) return true;
    }
    return false; 
}
Musician* Orchestra::get_members(){
    return _members;
}
bool Orchestra::add_musician(Musician new_musician){
    if(current_members < _size) {
        _members[current_members] = new_musician;
        current_members++;
        return true;
    }
    else return false;

}

Orchestra::~Orchestra(){
    delete[] _members;
}