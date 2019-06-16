#ifndef prt_MEMBER_H
#define prt_MEMBER_H

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
        virtual void prt();
};

class B : public A {
    protected:
        double* memberB;
    public:
        B(double b);
        ~B();
        void prt();
};

class C : public B {
    private:
        string* memberC;
    public:
        C(string c);
        ~C();
        void prt();
};

#endif
