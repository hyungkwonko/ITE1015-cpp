
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle() : width(0), height(0) { }

Rectangle::Rectangle(int width, int height) : width(width), height(height) { }

int Rectangle::getArea() const {
    return width*height;
}

int Rectangle::getPerimeter() const {
    return 2*width + 2*height;
}

Square::Square(int width, int height) : Rectangle(width, height) { }

void Square::print() {
    cout << width << "x" << width << "Square" << endl;
    cout << "Area: " << this->getArea() << endl;
    cout << "Perimeter: " << this->getPerimeter() << endl;
}

NonSquare::NonSquare(int width, int height) : Rectangle(width, height) { }

void NonSquare::print() {
    cout << width << "x" << height << "NonSquare" << endl;
    cout << "Area: " << this->getArea() << endl;
    cout << "Perimeter: " << this->getPerimeter() << endl;
}
