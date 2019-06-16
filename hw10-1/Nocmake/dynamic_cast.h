#ifndef DYNAMIC_CAST_H
#define DYNAMIC_CAST_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class B {
    public:
        B();
        virtual ~B();
};

class C : public B {
    public:
        C();
        ~C();
        void test_C();
};

class D : public B {
    public:
        D();
        ~D();
        void test_D();
};

#endif
