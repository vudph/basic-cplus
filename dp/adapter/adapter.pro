TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        PaypalAdapter.cpp \
        main.cpp

HEADERS += \
    AbstractPayment.h \
    MoneyBooker.h \
    Paypal.h \
    PaypalAdapter.h
