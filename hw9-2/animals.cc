
#include "animals.h"

using namespace std;

Animals::Animals(string name_, int age_) {
    name = new string;
    age = new int;
    *name = name_;
    *age = age_;
}

Animals::~Animals() {
    delete name;
    delete age;
}

Zebra::Zebra(string name_, int age_, int numStripes_) : Animals(name_, age_) {
    numStripes = new int;
    *numStripes = numStripes_;
}

Zebra::~Zebra() {
    delete numStripes;
}

Cat::Cat(string name_, int age_, string favoriteToy_) : Animals(name_, age_) {
    favoriteToy = new string;
    *favoriteToy = favoriteToy_;
}

Cat::~Cat() {
    delete favoriteToy;
}

void Animals::printInfo() { }

void Zebra::printInfo() {
    cout << "Zebra, Name: " << *name << ", Age: " << *age << ", Number of Stripes: " << *numStripes << endl;
}

void Cat::printInfo() {
    cout << "Cat, Name: " << *name << ", Age: " << *age << ", Favorite Toy: " << *favoriteToy << endl;
}


