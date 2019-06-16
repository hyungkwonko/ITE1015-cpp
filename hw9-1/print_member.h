#ifndef PRINT_MEMBER_H
#define PRINT_MEMBER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class A {
    protected:
        int* memberA;
    public:
        A(int a);
        virtual ~A();
        virtual void print();
};

class B : public A {
    protected:
        double* memberB;
    public:
        B(double b);
        ~B();
        void print();
};

class C : public B {
    private:
        string* memberC;
    public:
        C(string c);
        ~C();
        void print();
};

#endif
