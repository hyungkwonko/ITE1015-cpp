
#ifndef DRAW_SHAPE_H
#define DRAW_SHAPE_H

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

class Canvas {
    public:
        Canvas(size_t row, size_t col);
        ~Canvas();
        void Resize(const size_t& w, const size_t& h);
        bool DrawPixel(const int& x, const int& y, const char& brush);
        void Print() const;
        void Clear();
        size_t getCol() const;
        size_t getRow() const;
    private:
        size_t row;
        size_t col;
        char** cv;
};

class Shape {
    public:
        Shape(int width, int height);
        virtual ~Shape();
        virtual void Draw(Canvas* canvas);
        virtual string getInfo() const;
        void setXYB(const int& cx, const int& cy, const char& cb);

    protected:
        int width;
        int height;
        int cx;
        int cy;
        char cb;
};

class Rectangle : public Shape {
    public:
        Rectangle(int width, int height);
        ~Rectangle();
        void Draw(Canvas* canvas);
        string getInfo() const;
};

class UpTriangle : public Shape {
    public:
        UpTriangle(int height);
        ~UpTriangle();
        void Draw(Canvas* canvas);
        string getInfo() const;
};

class DownTriangle : public Shape {
    public:
        DownTriangle(int height);
        ~DownTriangle();
        void Draw(Canvas* canvas);
        string getInfo() const;
};

class Diamond : public Shape {
    public:
        Diamond(int height);
        ~Diamond();
        void Draw(Canvas* canvas);
        string getInfo() const;
};

#endif
