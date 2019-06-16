
#ifndef PRINT_INFO_H
#define PRINT_INFO_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class A {
    public:
        A();
        virtual string getTypeInfo();
};

class B : public A {
    public:
        B();
        virtual string getTypeInfo();
};

class C : public B {
    public:
        C();
        virtual string getTypeInfo();
};

void printObjectTypeInfo1(A* object);

void printObjectTypeInfo2(A& object);

#endif
