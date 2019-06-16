
#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
#include <string>

using namespace std;

class Number {
    protected:
        int num;
    public:
        Number();
        Number(int num);
        void setNumber(int num);
        int getNumber() const;
};

class Square: public Number {
    public:
        int getSquare() const;
};

class Cube: public Square {
    public:
        int getCube() const;
};

#endif
