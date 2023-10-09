#include "USBConnection.h"

stack<int> USBConnection::ids({3, 2, 1});

USBConnection::~USBConnection(){
    if (ID > 0) USBConnection::ids.push(ID);
}

USBConnection* USBConnection::CreateUsbConnection() {
    if (!USBConnection::ids.empty()) {
        int availableID = USBConnection::ids.top();
        USBConnection::ids.pop();
        return new USBConnection(availableID);
    }
    return nullptr;
}

int USBConnection::get_id() {return ID;}