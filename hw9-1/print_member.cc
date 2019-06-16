
#include "print_member.h"

using namespace std;

A::A(int a) {
    memberA = new int;
    *memberA = a;
    cout << "new memberA" << endl;
}

A::~A() {
    delete memberA;
    cout << "delete memberA" << endl;
}

void A::print() {
    cout << "*memberA: " << *memberA << endl;
}

B::B(double b) : A(1) {
    memberB = new double;
    *memberB = b;
    cout << "new memberB" << endl;
}

B::~B() {
    cout << "delete memberB" << endl;
}

void B::print() {
    cout << "*memberA: " << *memberA << endl;
    cout << "*memberB: " << *memberB << endl;
}

C::C(string c) : B(1.1) {
    memberC = new string;
    *memberC = c;
    cout << "new memberC" << endl;
}

C::~C() {
    cout << "delete memberC" << endl;
}

void C::print() {
    cout << "*memberA: " << *memberA << endl;
    cout << "*memberB: " << *memberB << endl;
    cout << "*memberC: " << *memberC << endl;
}

