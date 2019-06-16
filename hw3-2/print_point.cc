
#include <iostream>

using namespace std;

typedef struct {
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint(const Point* p) {
    std::cout<<"Calling getScale2xPoint()"<<std::endl;
    
    Point p2;
    p2.xpos = p->xpos;
    p2.ypos = p->ypos;
    p2.xpos *= 2;
    p2.ypos *= 2;
    return p2;
}

void swapPoint(Point* p1, Point* p2) {
    std::cout<<"Calling swapPoint()"<<std::endl;
    
    Point tmp;
    tmp = *p2;
    *p2 = *p1;
    *p1 = tmp;
}

int main(void) {
    Point pos1, pos2, pos3;
    std::cout<<"x & y: ";
    std::cin>>pos1.xpos>>pos1.ypos;

    pos2 = getScale2xPoint(&pos1);
    std::cout<<"P1: "<<pos1.xpos<<" "<<pos1.ypos<<std::endl;
    std::cout<<"P2: "<<pos2.xpos<<" "<<pos2.ypos<<std::endl;
    
    swapPoint(&pos1, &pos2);
    std::cout<<"P1: "<<pos1.xpos<<" "<<pos1.ypos<<std::endl;
    std::cout<<"P2: "<<pos2.xpos<<" "<<pos2.ypos<<std::endl;
    
    return 0;
}

