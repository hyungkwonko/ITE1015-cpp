#ifndef ANIMALS_H
#define ANIMALS_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

class Animals {
    protected:
        string* name;
        int* age;
    public:
        Animals(string name_, int age_);
        virtual ~Animals();
        virtual void printInfo();
};

class Zebra : public Animals {
    private:
        int* numStripes;
    public:
        Zebra(string name, int age, int numStripes_);
        ~Zebra();
        void printInfo();
};

class Cat : public Animals {
    private:
        string* favoriteToy;
    public:
        Cat(string name_, int age_, string favoriteToy_);
        ~Cat();
        void printInfo();
};

#endif
