#ifndef PAYPAL_H
#define PAYPAL_H

#include<iostream>

class Paypal {
public:
    void sendPayment(double amount) {
        std::cout << "Via Paypal: " << amount << std::endl;
    }
};

#endif // PAYPAL_H
