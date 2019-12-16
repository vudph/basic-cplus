#include <QTextStream>
#include "fraction.h"
#include <QCoreApplication>
#include "subobject.h"

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

//    const int DASHES = 30;
//    QTextStream cout(stdout);
//    {
//        int i;
//        for (i = 0; i < DASHES; ++i)
//            cout << "=";
//        cout << endl;
//    }
////    cout << "i = " << i << endl; // Error: i no longer exists, so it is not visible in this scope.
//    Fraction f1(0, 0), f2(0, 0);
//    f1.set(3, 4);
//    f2.set(11,12);
////    f2.m_Numerator = 12; //m_Numerator is visible but not accessible.
//    cout << "The first fraction is: " << f1.toString() << endl;
//    cout << "\nThe second fraction, expressed as a double is: "<< f2.toDouble() << endl;

    QTextStream cout(stdout);
    Fraction twothirds(2,3); // Using 2-arg constructor
    Fraction threequarters(3,4); // Using 2-arg constructor
    Fraction acopy(twothirds); // Using copy constructor, equivalent to: acopy = twothirds
    Fraction f4 = threequarters; // Using copy constructor
    f4.set(5, 6);
    cout << "after declarations - " << Fraction::report();
    f4 = twothirds; // Assignment
    cout << "\nbefore multiply - " << Fraction::report();
    f4 = twothirds.multiply(threequarters);
    cout << "\nafter multiply - " << Fraction::report();

    Fraction frac(8); // Conversion constructor call
    Fraction frac2 = 5; // Copy int (calls conversion ctor, too).
    frac = 9; // Conversion followed by assignment.
    frac = (Fraction) 7; // C-style typecast (deprecated).
    frac = Fraction(6); //Explicit temporary; also a C++ typecast
    frac = static_cast<Fraction>(6); // Preferred ANSI-style typecast
    frac = frac2.times(19); //Implicit call to the conversion constructor

    cout << "\nFinal: " << Fraction::report() << endl;

    Square sq1(3,4,5,6);
    Point p1(2,3), p2(8, 9);
    Square sq2(p1, p2);

    return 0;
}
