
#include <stdio.h>
#include <iostream>

void rotateLeft(int* pa, int* pb, int* pc) {
    int temp = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = temp;
    std::cout<<*pa<<":"<<*pb<<":"<<*pc<<std::endl;
}

void rotateRight(int* pa, int* pb, int* pc) {
    int temp = *pc;
    *pc = *pb;
    *pb = *pa;
    *pa = temp;
    std::cout<<*pa<<":"<<*pb<<":"<<*pc<<std::endl;
}

int main(void) {
    int a = 10;
    int b = 20;
    int c = 30;
    int ptr;

    std::cout<<a<<":"<<b<<":"<<c<<std::endl;

    while(1) {
        std::cout<<"select: ";
        std::cin>>ptr;
        
        if(ptr == 1) {
            rotateLeft(&a, &b, &c);
        } else if(ptr == 2) {
            rotateRight(&a, &b, &c);
        } else {
            break;
        }
    }
    return 0;
}
