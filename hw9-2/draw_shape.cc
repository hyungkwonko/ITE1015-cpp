
// C++ class draw_shape assignment
// Hanyang Univ.
// 2014018940 HyungKwon Ko

#include "draw_shape.h"

using namespace std;

Canvas::Canvas(size_t row, size_t col) {
    this->row = row;
    this->col = col;

    // dynamic memory allocation
    cv = new char*[row];
    for(int i=0; i<row; i++)
        cv[i] = new char[col];

    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            cv[i][j] = '.';
    
    cout << "canvas (" << this->row << " x " << this->col << ") made!" << endl;
}

Canvas::~Canvas() {
    // free the memory
    for(int i=0; i<row; i++)
        delete[] cv[i];
    delete[] cv;
    cout << "free memory and safely terminate" << endl;
}

void Canvas::Resize(const size_t& w, const size_t& h) {
    
    // free the memory
    for(int i=0; i<row; i++)
        delete[] cv[i];
    delete[] cv;
   
    cout << "canvas resize from (" << this->row << " x " << this->col << ") to (" << w << " x " << h << ")" << endl;
    this->row = w;
    this->col = h;
   
    // reallocate the memory
    cv = new char*[row];
    for(int i=0; i<row; i++)
        cv[i] = new char[col];
    
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            cv[i][j] = '.';
}

bool Canvas::DrawPixel(const int& x, const int& y, const char& brush) {
    cv[x][y] = brush;
    return true;
}

void Canvas::Print() const {
    for(int i=0; i<col; i++) 
        cout << " " << i;
    cout << endl;
    for(int i=0; i<row; i++) {
        cout << i << " ";
        for(int j=0; j<col; j++) {
            cout << cv[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Canvas::Clear() {
    // change all units to default value(.)
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            cv[i][j] = '.';
}

size_t Canvas::getCol() const {
    return col;
}

size_t Canvas::getRow() const {
    return row;
}

Shape::Shape(int width, int height) {
    this->width = width;
    this->height = height;
}

Shape::~Shape() { }

void Shape::setXYB(const int& cx, const int& cy, const char& cb) {
    this->cx = cx;
    this->cy = cy;
    this->cb = cb;
}

void Shape::Draw(Canvas* canvas) { }

Rectangle::Rectangle(int width, int height) : Shape(width, height) { }

Rectangle::~Rectangle() { }

void Rectangle::Draw(Canvas* canvas) {
    for(int i=0; i<canvas->getRow(); i++)
        for(int j=0; j<canvas->getCol(); j++)
            if(j>=cx && j<cx + width && i>=cy && i<cy+height)
                canvas->DrawPixel(i, j, cb);
}


UpTriangle::UpTriangle(int height) : Shape(width, height) { }

UpTriangle::~UpTriangle() { }

void UpTriangle::Draw(Canvas* canvas) {
    const int cenx = cx;
    const int ceny = cy + height - 1;

    for(int i=0; i<canvas->getRow(); i++)
        for(int j=0; j<canvas->getCol(); j++)
            if((abs(cenx-j) + abs(ceny-i) < height) && (i <= ceny))
                canvas->DrawPixel(i, j, cb);
}

DownTriangle::DownTriangle(int height) : Shape(width, height) { }

DownTriangle::~DownTriangle() { }

void DownTriangle::Draw(Canvas* canvas) {
    const int cenx = cx;
    const int ceny = cy - height + 1;

    for(int i=0; i<canvas->getRow(); i++)
        for(int j=0; j<canvas->getCol(); j++)
            if(abs(cenx-j) + abs(ceny-i) < height && i >= ceny)
                canvas->DrawPixel(i, j, cb);
}

Diamond::Diamond(int height) : Shape(width, height) { }

Diamond::~Diamond() { }

void Diamond::Draw(Canvas* canvas) {
    const int cenx = cx;
    const int ceny = cy + height - 1;

    for(int i=0; i<canvas->getRow(); i++)
        for(int j=0; j<canvas->getCol(); j++)
            if(abs(cenx-j) + abs(ceny-i) < height)
                canvas->DrawPixel(i, j, cb);
}

string Shape::getInfo() const { }

string Rectangle::getInfo() const {
    return "Rectangle " + to_string(cx) + " " + to_string(cy) + " " + to_string(width) + " " + to_string(height) + " " + cb;
}

string UpTriangle::getInfo() const {
    return "UpTriangle " + to_string(cx) + " " + to_string(cy) + " " + to_string(height) + " " + cb;
}

string DownTriangle::getInfo() const {
    return "DownTriangle " + to_string(cx) + " " + to_string(cy) + " " + to_string(height) + " " + cb;
}

string Diamond::getInfo() const {
    return "Diamond " + to_string(cx) + " " + to_string(cy) + " " + to_string(height) + " " + cb;
}
