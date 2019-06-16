
#ifndef DRAW_SHAPE_H
#define DRAW_SHAPE_H

#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

class Shape {
    public:
        Shape(int width, int height);
        double getArea() const;
        int getPerimeter() const;
        void print();
        void setValue(const int width, const int height);
        void Draw(int canvas_width, int canvas_height, int s1, int s2, string ss);
    protected:
        int width;
        int height;
};

class Square: public Shape {
    public:
        Square(int width, int height);
        void Draw(int canvas_width, int canvas_height, int s1, int s2, string ss);
};

class Rectangle: public Shape {
    public:
        Rectangle(int width, int height);
        void Draw(int canvas_width, int canvas_height, int s1, int s2, string ss);
};

class Diamond: public Shape {
    public:
        Diamond(int width);
        double getArea() const;
        int getPerimeter() const;
        void Draw(int canvas_width, int canvas_height, int s1, int s2, string ss);
        void print();
};

#endif
