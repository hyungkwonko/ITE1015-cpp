#include <stdio.h>
#include <iostream>

using namespace std;

int main(void) {
    const int NUM = 5;
    int a[NUM], i, min, max;
    int sum = 0;
    std::cout<<"input num: ";
    
    for(i=0; i<NUM; i++) {
        std::cin>>a[i];
        sum = sum + a[i];
    }
   
    min = a[0];
    max = a[0];

    for(i=1; i<NUM; i++) {
        if(a[i]>max) {
            max = a[i];
        }
        if(a[i]<min) {
            min = a[i];
        }
    }
    std::cout<<"sum: "<<sum<<std::endl;
    std::cout<<"min: "<<min<<std::endl;
    std::cout<<"max: "<<max<<std::endl;
    return 0;
}

