
#include "draw_shape.h"

using namespace std;

Shape::Shape(int width, int height) : width(width), height(height) { }

double Shape::getArea() const { return width*height; }

int Shape::getPerimeter() const { return 2*width + 2*height; }

void Shape::print() {
    cout << width << " x " << height << " Shape" << endl;
    cout << "Area: " << this->getArea() << endl;
    cout << "Perimeter: " << this->getPerimeter() << endl;
}

void Shape::setValue(const int width, const int height) {
    this->width = width;
    this->height = height;
}

Square::Square(int width, int height) : Shape(width, height) { }

void Square::Draw(int canvas_width, int canvas_height, int s1, int s2, string ss) {
    cout << "DRAW SQUARE" << endl;
    for(int i=0; i<canvas_width; i++)
        cout << " " << i;
    cout << endl;
    for(int i=0; i<canvas_width; i++) {
        cout << i << " ";
        for(int j=0; j<canvas_height; j++) {
            if(j >= s1 && j < s1 + width && i >= s2 && i < s2 + width)
                cout << ss << " ";
            else
                cout << ". ";
        }
        cout << endl;
    }
    cout << endl;
}

Rectangle::Rectangle(int width, int height) : Shape(width, height) { }

void Rectangle::Draw(int canvas_width, int canvas_height, int s1, int s2, string ss) {
    cout << "DRAW RECTANGLE" << endl;
    for(int i=0; i<canvas_width; i++)
        cout << " " << i;
    cout << endl;
    for(int i=0; i<canvas_width; i++) {
        cout << i << " ";
        for(int j=0; j<canvas_height; j++) {
            if(j >= s1 && j < s1 + width && i >= s2 && i < s2 + height)
                cout << ss << " ";
            else
                cout << ". ";
        }
        cout << endl;
    }
    cout << endl;
}

Diamond::Diamond(int width) : Shape(width, height) { }

void Diamond::print() {
    cout << "Area: " << Diamond::getArea() << endl;
    cout << "Perimeter: " << Diamond::getPerimeter() << endl;
}

double Diamond::getArea() const { return (width*2-1)*(width*2-1)/2.0; }

int Diamond::getPerimeter() const { return (width-1)*8; }

void Diamond::Draw(int canvas_width, int canvas_height, int s1, int s2, string ss) {
    
    int cenx = s1;
    int ceny = s2 + width - 1;
    
    cout << "DRAW DIAMOND" << endl;
    for(int i=0; i<canvas_width; i++)
        cout << " " << i;
    cout << endl;
    for(int i=0; i<canvas_width; i++) {
        cout << i << " ";
        for(int j=0; j<canvas_height; j++) {
            if(abs(cenx - j) + abs(ceny-i) < width)
                cout << ss << " ";
            else
                cout << ". ";
        }
        cout << endl;
    }
    cout << endl;
}
