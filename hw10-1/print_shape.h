
#ifndef PRINT_SHAPE_H
#define PRINT_SHAPE_H

#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class A {
    public:
        A();
        virtual void test1();
        virtual void test2() = 0;
};

class B : public A {
    public:
        B();
        //void test1();
        void test2();
};

class C : public A {
    public:
        C();
        void test1();
        void test2();
};

class BB : public B {
    public:
        BB();
        void test1();
        //void test2();
};


#endif
