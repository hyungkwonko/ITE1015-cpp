
#include "print_shape.h"

using namespace std;

A::A() {

}

B::B() : A() {

}

C::C() : A() {

}

BB::BB() : B() {
   
}

void A::test1() {
    cout << "A::test1()" << endl;
}

/*void B::test1() {
    cout << "B::test1()" << endl;
}*/

void C::test1() {
    cout << "C::test1()" << endl;
}

void BB::test1() {
    cout << "BB::test1()" << endl;
}

void B::test2() {
    cout << "B::test2()" << endl;
}

void C::test2() {
    cout << "C::test2()" << endl;
}

/*void BB::test2() {
    cout << "BB::test2()" << endl;
}*/
