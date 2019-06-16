
#include "print_shape.h"

using namespace std;

Shape::Shape() {

}

Shape::~Shape() {

}

Circle::Circle(double radius) : Shape() {
    this->radius = radius;
    this->area = PI * radius * radius;
    this->perimeter = 2 * PI * radius;
    this->sp = "circle";
}

Circle::~Circle() {

}


Rectangle::Rectangle(double width, double height) : Shape() {
    this->width = width;
    this->height = height;
    this->area = width * height;
    this->perimeter = 2 * width + 2 * height;
    this->sp = "rectangle";
}

Rectangle::~Rectangle() {

}

double Circle::getArea() {
    return this->area;
}

double Circle::getPerimeter() {
    return this->perimeter;
}

string Circle::getTypeString() {
    return this->sp;
}

double Rectangle::getArea() {
    return this->area;
}

double Rectangle::getPerimeter() {
    return this->perimeter;
}

string Rectangle::getTypeString() {
    return this->sp;
}
