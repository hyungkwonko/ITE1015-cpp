
#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class A {
    public:
        A();
        virtual void test();
};

class B : public A {
    public:
        B();
        virtual void test();
};

class C : public B {
    public:
        C();
        virtual void test();
};

#endif
