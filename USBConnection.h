#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>
using namespace std;

class USBConnection {
    private:
        int ID;
        static stack<int> ids;
        USBConnection(int ID) {
            this->ID=ID;
        }

    public:
        static USBConnection* CreateUsbConnection();
        int get_id();
        ~USBConnection();

};



#endif