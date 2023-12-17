/*
 * This program was written by Alexander John for educational purposes.
 *
 * Virtual function
 *
 * A virtual function is a member function in the base class that we expect
 * to redefine in derived classes.
 *
 * Basically, a virtual function is used in the base class in order to ensure
 * that the function is overridden. This especially applies to cases where
 * a pointer of base class points to an object of a derived class.
 *
 */
#include <iostream>

using namespace std;

class Base {
public:
    virtual void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    Derived derived1;

    Base *pBase1 = &derived1;

    // This function is overridden even when we use a pointer
    // of Base type that points to the Derived object derived1
    pBase1->print();

    return 0;
}
