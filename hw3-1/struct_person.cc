#include <iostream>
#include <stdio.h>

using namespace std;

struct point {
    char xpos[10];
    int ypos;
};

int main() {
    struct point pos;
    std::cout<<"name & age: ";
    std::cin>>pos.xpos>>pos.ypos;
    std::cout<<"name: "<<pos.xpos<<std::endl;
    std::cout<<"age: "<<pos.ypos<<std::endl;
    return 0;
}
