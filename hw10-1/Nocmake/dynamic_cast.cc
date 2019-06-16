#include "dynamic_cast.h"

using namespace std;

B::B() {

}

B::~B() {

}

C::C() : B() {

}

C::~C() {

}

D::D() : B() {

}

D::~D() {

}

void C::test_C() {
    cout << "C::test_C()" << endl;
}

void D::test_D() {
    cout << "D::test_D()" << endl;
}
