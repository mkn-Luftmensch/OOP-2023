#include "Invoice.h"

Invoice::Invoice(string invoiceId) {
    this->invoiceId = invoiceId;
    dollarsOwed = 0;
}

void Invoice::addServiceCost(int costDollars) {
    dollarsOwed += costDollars;
}

int Invoice::getDollarsOwed() {return dollarsOwed;}
string Invoice::getInvoiceId() {return invoiceId;}