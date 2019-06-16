#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct {
    char xpos[10];
    int ypos;
} Point;

int main() {
    Point pos[3];
    std::cout<<"name & age: ";
    std::cin>>pos[0].xpos>>pos[0].ypos;
    std::cout<<"name & age: ";
    std::cin>>pos[1].xpos>>pos[1].ypos;
    std::cout<<"name & age: ";
    std::cin>>pos[2].xpos>>pos[2].ypos;
    std::cout<<"name: "<<pos[0].xpos<<", age: "<<pos[0].ypos<<std::endl;
    std::cout<<"name: "<<pos[1].xpos<<", age: "<<pos[1].ypos<<std::endl;
    std::cout<<"name: "<<pos[2].xpos<<", age: "<<pos[2].ypos<<std::endl;
    
    return 0;
}
