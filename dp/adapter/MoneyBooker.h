#ifndef MONEYBOOKER_H
#define MONEYBOOKER_H
#include<iostream>

class MoneyBooker {
public:
    void doPayment(double amount) {
        std::cout << "Via MoneyBooker: " << amount << std::endl;
    }
};

#endif // MONEYBOOKER_H
