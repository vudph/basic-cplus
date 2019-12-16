#include <iostream>
using namespace std;

class A {
 public:
    virtual ~A() { }
    virtual void foo() {
        cout << "A's foo()" << endl;
        bar();
    }
    virtual void bar() {
        cout << "A's bar()" << endl;
    }
};

class B: public A {
 public:
    void foo() {
        cout << "B's foo()" << endl;
        A::foo();
    }
    void bar() {
        cout << "B's bar()" << endl;
    }
};

class A1 {
 public:
    virtual void foo() {
        cout << "A1's foo()" << endl;
    }
};
class B1: public A1 {
 public:
    void foo() {
        cout << "B1's foo()" << endl;
    }
};

class C1: public B1 {
 public:
    void foo() {
        cout << "C1's foo()" << endl;
    }
};

int main() {
    B bobj;
    A *aptr = &bobj;
    aptr->foo();
    cout << "-------------" << endl;
    A aobj = *aptr;
    aobj.foo();
    cout << "-------------" << endl;
    aobj = bobj;
    aobj.foo();
    cout << "-------------"<< endl;
    bobj.foo();
    cout << "-------------"<< endl;

    C1 c1obj;
    B1 *b1ptr = &c1obj;
    b1ptr->foo();
    A1* a1ptr = &c1obj;
    a1ptr->foo();
}

/*
B's foo()
A's foo()
B's bar()
-------------
A's foo()
A's bar()
-------------
A's foo()
A's bar()
-------------
B's foo()
A's foo()
B's bar()
*/
