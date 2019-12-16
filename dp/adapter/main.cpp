#include <iostream>
#include "Paypal.h"
#include "MoneyBooker.h"
#include "AbstractPayment.h"
#include "PaypalAdapter.h"

using namespace std;

int main()
{
    Paypal p;
    p.sendPayment(123);
/*
    1) When PayPal changed the API method name from sendPayment to payAmount => all places (client code) that use sendPayment method need to be changed to payAmount.
       Imagine the amount of code we need to change and the time we need to spend for regression tests. => solution: create PaypalAdapter that holds a reference to Paypal, and implements API which the client expects
*/
    Paypal *p1 = new Paypal();
    AbstractPayment *ab = new PaypalAdapter(p1);
    ab->pay(456);
/*
    2) When we have a new payment: MoneyBooker. It has own payment method, called doPayment. Incompatible payment methods (APIs) between Paypal and MoneyBooker
*/
    MoneyBooker m;
    m.doPayment(111);

    delete ab;
    delete p1;
    return 0;
}
