#include <iostream>

//using namespace std;

void factory() {
    int factArg = 0;
    int fact(1);
    do {
        std::cout << "Factorial of: ";
        std::cin >> factArg;
        if ( factArg < 0 ) {
            std::cout << "No negative values, please!" << std::endl;
        }
    } while (factArg < 0);
    int i = 2;
    while ( i <= factArg ) {
        fact = fact * i;
        i = i + 1;
    }
    std::cout << "The Factorial of " << factArg << " is: " << fact << std::endl;
}

void pointerAndReference() {
    int k = 4;
    int &q = k;
    q = 5;
    std::cout << "k=" << k << std::endl;
    k = 6;
    std::cout << "q=" << q << std::endl;

    int j;
    int *pj = &j;
    *pj = 10;
    std::cout << "j=" << j << std::endl;
    j = 11;
    std::cout << "*pj=" << *pj << std::endl;
}

void pointerAndConst() {
    int m1 = 11, m2 = 13;
    const int* n1 = &m1; //a pointer to const int (m1), n1 contains address which is pointing a location which is read-only
    int* const n2 = &m2; //a const pointer to int (m2), n2 contains address and n2 is read-only
    // First snapshot
    std::cout << "n1 = " << n1 << '\t' << *n1 << '\n' << "n2 = " << n2 << '\t' << *n2 << std::endl;

    n1 = &m2;
    //*n1 = 15; //Error: assignment of read-only location
    m1 = 17; //an ordinary int variable; okay to assign
    //n2 = &m1; //Error: assignment of read-only variable n2
    *n2 = 16;
    // Second snapshot
    std::cout << "n1 = " << n1 << '\t' << *n1 << '\n' << "n2 = " << n2 << '\t' << *n2 <<  std::endl;
    m2 = 18;
    std::cout << "n1 = " << n1 << '\t' << *n1 << '\n' << "n2 = " << n2 << '\t' << *n2 <<  std::endl;
/*
// First snapshot
n1 = 0x61fe18 11
n2 = 0x61fe14 13
// Second snapshot
n1 = 0x61fe14 16
n2 = 0x61fe14 16
n1 = 0x61fe14 18
n2 = 0x61fe14 18
*/
}

void exercise()
{
    int i = 5;
    int j=6;
    int* p = &i;
    std::cout << "1. p=" << p << ", *p=" << *p << std::endl;
    int& r=i;
    int& rpr=(*p);
    std::cout << "2. p=" << p << ", *p=" << *p << std::endl;
    i = 10;
    p = &j;
    std::cout << "3. p=" << p << ", *p=" << *p << std::endl;
    rpr = 7;
    std::cout << "4. rpr=" << rpr << std::endl;
    r = 8;

    std::cout << "i=" << i << ", j=" << j << ", *p=" << *p << ", rpr=" << rpr << ", r=" << r << std::endl;
}

int& maxi(int& x, int& y) {
    return (x > y) ? x : y;
}

int* maxi1(int* x, int* y)
{
    return (*x > *y) ? x : y;
}

int main()
{
    using namespace std;
//    factory();
//    pointerAndReference();
//    pointerAndConst();
//    exercise();

    int a = 10, b = 20;
    maxi(a,b) = 5;
    maxi(a,b) += 6;
    ++maxi(a, b) ;
    cout << a << '\t' << b << '\n';

    int c = 10, d = 20;
    *maxi1(&c, &d) = 5;
    *maxi1(&c, &d) += 6;
    ++(*maxi1(&c, &d));
    cout << c << '\t' << d << endl;


    return 0;
}



