#include <sstream>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

class MyVector {
    private:
        int max_num;
        int* a;
    public:
        MyVector(int s = 0);
        ~MyVector();
        void setNum(int s);
        void setMyVector(int n, vector<int>& x);
        void getMyVector();
        MyVector operator+(const MyVector& m);
        MyVector operator-(const MyVector& m);
        MyVector operator+(const int n);
        MyVector operator-(const int n);
        MyVector operator=(const MyVector& m);
        friend ostream& operator<<(ostream& out, MyVector b);
        friend istream& operator>>(istream& in, MyVector& b);
};
