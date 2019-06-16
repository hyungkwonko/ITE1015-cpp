
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(int width, int height) {
    this->width = width;
    this->height = height;
}

int Rectangle::getArea() {
    return width*height;
}

int Rectangle::getPerimeter() {
    return 2*width + 2*height;
}

Square::Square(int width) : Rectangle(width, height) {
    this->width = width;
}

void Square::print() {
    cout << width << "x" << width << "Square" << endl;
    cout << "Area: " << width*width << endl;
    cout << "Perimeter: " << 4*width << endl;
}

NonSquare::NonSquare(int width, int height) : Rectangle(width, height) {
    this->width = width;
    this->height = height;
}

void NonSquare::print() {
    cout << width << "x" << height << "NonSquare" << endl;
    cout << "Area: " << this->getArea() << endl;
    cout << "Perimeter: " << this->getPerimeter() << endl;
}
