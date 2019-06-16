#include <iostream>
#include <stdlib.h>
#include "simple_shape.h"

#define PI  3.141592


Circle::Circle(int x, int y, int r) {
    this->x = x;
    this->y = y;
    this->r = r;
}

double Circle::getArea() {
    return PI*(this->r)*(this->r);
}

double Circle::getPerimeter() {
    return 2*PI*(this->r);
} 

Rectangle::Rectangle(int x1, int x2, int y1, int y2) {
    this->x1 = x1;
    this->x2 = x2;
    this->y1 = y1;
    this->y2 = y2; 
}

int Rectangle::getArea() {
    return abs(this->x1 - this->x2) * abs(this->y1 - this->y2);
}

int Rectangle::getPerimeter() {
    return 2*(abs(this->x1 - this->x2) + abs(this->y1 - this->y2));
} 
