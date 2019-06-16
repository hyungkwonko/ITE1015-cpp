
#include "print_info.h"

A::A() { }
B::B() { }
C::C() { }

using namespace std;

string A::getTypeInfo() {
    return "This is an instance of class A";
}

string B::getTypeInfo() {
    return "This is an instance of class B";
}

string C::getTypeInfo() {
    return "This is an instance of class C";
}

void printObjectTypeInfo1(A* Object) {
    cout << Object->getTypeInfo() << endl;
}

void printObjectTypeInfo2(A& Object) {
    cout << Object.getTypeInfo() << endl;
}
