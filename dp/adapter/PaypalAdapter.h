#ifndef PAYPALADAPTER_H
#define PAYPALADAPTER_H
#include "AbstractPayment.h"
#include "Paypal.h"

class PaypalAdapter : public AbstractPayment {
public:
    PaypalAdapter(Paypal *adaptee);
    virtual void pay(double amount) override;
    virtual ~PaypalAdapter();
private:
    Paypal *m_adaptee;
};

#endif // PAYPALADAPTER_H
