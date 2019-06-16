
#include "number.h"

using namespace std;

Number::Number() : num(0) { }

Number::Number(int num) : num(num) { }

void Number::setNumber(int num) {
    this->num = num;
}

int Number::getNumber() const {
    return num;
}

int Square::getSquare() const {
    return num*num;
}

int Cube::getCube() const {
    return num*num*num;
}
