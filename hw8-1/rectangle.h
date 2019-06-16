
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>
#include <map>
#include <sstream>

class Rectangle {
    public:
        Rectangle();
        Rectangle(int width, int height);
        int getArea() const;
        int getPerimeter() const;
    protected:
        int width;
        int height;

};

class Square: public Rectangle {
    public:
        Square(int width, int height);
        void print();
};

class NonSquare: public Rectangle {
    public:
        NonSquare(int width, int height);
        void print();
};

#endif
