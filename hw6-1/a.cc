#include <iostream>
#include <stdlib.h>

#define PI  3.141592

using namespace std;

class Circle {
    private:
        double x,y,r;
    public:
        Circle(int x, int y, int r);
        double getArea();
        double getPerimeter();
};

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


class Rectangle {
    private:
        int x1,x2,y1,y2;
    public:
        Rectangle(int x1, int x2, int y1, int y2);
        int getArea();
        int getPerimeter();
};

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
int main() {
    char p[1];
    int a[4];

    while(true) {
        cin >> p[0];
        if(p[0] == 'C' || p[0] == 'c') {
            for(int i=0; i<3; i++) {
                cin >> a[i];
            }
            Circle c1(a[0],a[1],a[2]);
            cout << "area: " << c1.getArea() << endl;
            cout << "perimeter: " << c1.getPerimeter() << endl;
        } else if(p[0] == 'R' || p[0] == 'r') {
            for(int i=0; i<4; i++)
                cin >> a[i];
            Rectangle d1(a[0],a[1],a[2],a[3]);
            cout << "area: " << d1.getArea() << endl;
            cout << "perimeter: " << d1.getPerimeter() << endl;
        } else if(p[0] == 'Q' || p[0] == 'q') {
            cout << "end of process..." << endl;
            break;
        } else {
            cout << "try again..." << endl;
            continue;
        }
    }
    return 0;
}

