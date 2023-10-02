#ifndef INVOICE_H
#define INVOICE_H

#include <string>
using namespace std;

class Invoice {
    private:
        string invoiceId;
        int dollarsOwed;
    public:
        Invoice(string invoiceId);
        void addServiceCost(int costDollars);
        int getDollarsOwed();
        string getInvoiceId();
};

#endif