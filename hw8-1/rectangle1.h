
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>
#include <map>
#include <sstream>

class Rectangle {
    public:
        Rectangle(int width, int height);
        int getArea();
        int getPerimeter();
    protected:
        int width;
        int height;

};

class Square: public Rectangle {
    public:
        Square(int width);
        void print();
};

class NonSquare: public Rectangle {
    public:
        NonSquare(int width, int height);
        void print();
};

#endif
