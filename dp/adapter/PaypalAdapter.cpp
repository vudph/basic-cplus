#include "PaypalAdapter.h"

PaypalAdapter::PaypalAdapter(Paypal *adaptee) : m_adaptee(adaptee) {
}

PaypalAdapter::~PaypalAdapter() {}

void PaypalAdapter::pay(double amount) {
    m_adaptee->sendPayment(amount);
}
