#ifndef HOUSE_H
#define HOUSE_H
#include <string>
using namespace std;

class House {
    private:
        string _ownerName;
        int _lotNumber;
    public:
        House();
        House(string ownerName, int lotNumber);
        string get_owner_name();
        int get_lot_number();
        ~House();
};

#endif