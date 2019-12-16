#ifndef FRACTION_H
#define FRACTION_H
#include <QString>

class Fraction {
public:
    Fraction(int n, int d); // regular constructor
    Fraction(int n); // Single argument constructor defines a conversion from int
    Fraction(const Fraction& other); // copy constructor
    Fraction& operator=(const Fraction& other); // copy assignment operator
    Fraction multiply(Fraction f2);
    Fraction times(const Fraction& other);
    static QString report() ;
    void set(int numerator, int denominator);
    double toDouble() const;
    QString toString() const;
private:
    int m_Numerator;
    int m_Denominator;
    static int s_assigns;
    static int s_copies;
    static int s_ctors;
    static int s_cverts;
};

#endif // FRACTION_H
