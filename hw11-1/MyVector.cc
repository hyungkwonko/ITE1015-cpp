#include "MyVector.h"

using namespace std;

MyVector::MyVector(int s) {
    s = max_num;
}

MyVector::~MyVector() {
    delete[] a;
}

void MyVector::setNum(int s) {
    max_num = s;
}

void MyVector::setMyVector(int n, vector<int>& x) {
    max_num = n;
    a = new int[max_num];
    for(int i=0; i<x.size(); i++) {
        a[i] = x[i];
    }
}

void MyVector::getMyVector() {
    for(int i=0; i<max_num; i++) {
        cout << "a[i]: " << a[i] << ", ";
    }
}

MyVector MyVector::operator+(const MyVector& m) {
    MyVector mc;
    vector<int> c;
    for(int i=0; i<max_num; i++) {
        c.push_back(a[i] + m.a[i]); 
    }
    mc.setMyVector(max_num, c);
    return mc;
}

MyVector MyVector::operator-(const MyVector& m) {
    MyVector mc;
    vector<int> c;
    for(int i=0; i<max_num; i++) {
        c.push_back(a[i] - m.a[i]); 
    }
    mc.setMyVector(max_num, c);
    return mc;
}

MyVector MyVector::operator+(const int n) {
    MyVector mc;
    vector<int> c;
    for(int i=0; i<max_num; i++) {
        c.push_back(a[i] + n); 
    }
    mc.setMyVector(max_num, c);
    return mc;
}

MyVector MyVector::operator-(const int n) {
    MyVector mc;
    vector<int> c;
    for(int i=0; i<max_num; i++) {
        c.push_back(a[i] - n); 
    }
    mc.setMyVector(max_num, c);
    return mc;
}

//
MyVector MyVector::operator=(const MyVector& m) {
    
    max_num = m.max_num;
    int* tmp = new int[max_num];
    for(int i=0; i<max_num; i++) {
        tmp[i] = m.a[i];
    }
    delete[] a;
    a = tmp;

    return *this;
}
//

ostream& operator << (ostream& out, MyVector b) {
    for(int i=0; i<b.max_num; i++) {
        out << b.a[i] << " ";
    }
    out << endl;
    return out;
}

istream& operator >> (istream& in, MyVector& b) {
    b.a = new int[b.max_num]; 
    for(int i=0; i<b.max_num; i++)
        in >> b.a[i];
    return in;
}
