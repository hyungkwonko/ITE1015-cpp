#ifndef SIMPLE_SHAPE_H
#define SIMPLE_SHAPE_H

class Circle {
    private:
        int x,y,r;
    public:
        Circle(int x, int y, int r);
        double getArea();
        double getPerimeter();
};

class Rectangle {
    private:
        int x1,x2,y1,y2;
    public:
        Rectangle(int x1, int x2, int y1, int y2);
        int getArea();
        int getPerimeter();
};
#endif
