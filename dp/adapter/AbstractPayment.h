#ifndef ABSTRACTPAYMENT_H
#define ABSTRACTPAYMENT_H

class AbstractPayment {
public:
    virtual void pay(double amount) = 0;
    virtual ~AbstractPayment() {}
};

#endif // ABSTRACTPAYMENT_H
