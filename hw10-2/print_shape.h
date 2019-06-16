#ifndef PRINT_SHAPE_H
#define PRINT_SHAPE_H

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>

#define PI  3.141592

using namespace std;

class Shape {
    public:
        Shape();
        ~Shape();
        virtual double getArea() = 0;
        virtual double getPerimeter() = 0;
        virtual string getTypeString() = 0;
    protected:
        double area;
        double perimeter;
        string sp;
};

class Circle : public Shape {
    public:
        Circle(double radius);
        ~Circle();
        double getArea();
        double getPerimeter();
        string getTypeString();
    private:
        double radius;
};

class Rectangle : public Shape {
    public:
        Rectangle(double width, double height);
        ~Rectangle();
        double getArea();
        double getPerimeter();
        string getTypeString();
    private:
        double width;
        double height;
};

#endif
