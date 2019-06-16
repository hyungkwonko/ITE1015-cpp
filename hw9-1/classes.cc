
#include "classes.h"

A::A() { }
B::B() { }
C::C() { }

using namespace std;

void A::test() {
    cout << "A::test()" << endl;
}

void B::test() {
    cout << "B::test()" << endl;
}

void C::test() {
    cout << "C::test()" << endl;
}
