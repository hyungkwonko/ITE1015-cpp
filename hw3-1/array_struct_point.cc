#include <iostream>

typedef struct {
    int xpos;
    int ypos;
} Point;

void scale2x(Point* pp) {
    pp->xpos *= 2;
    pp->ypos *= 2;
}

int main() {
    Point pos[3];
    std::cin>>pos[0].xpos>>pos[0].ypos;
    std::cin>>pos[1].xpos>>pos[1].ypos;
    std::cin>>pos[2].xpos>>pos[2].ypos;
    scale2x(&pos[0]);
    scale2x(&pos[1]);
    scale2x(&pos[2]);
    std::cout<<"x1: "<<pos[0].xpos<<", y1: "<<pos[0].ypos<<std::endl;
    std::cout<<"x2: "<<pos[1].xpos<<", y2: "<<pos[1].ypos<<std::endl;
    std::cout<<"x3: "<<pos[2].xpos<<", y3: "<<pos[2].ypos<<std::endl;
    return 0;
}
