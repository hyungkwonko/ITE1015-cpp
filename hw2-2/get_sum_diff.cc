
#include <stdio.h>
#include <iostream>

using namespace std;

void getSumDiff(int a, int b, int* pSum, int* pDiff) {
    *pSum = a + b;
    *pDiff = a - b;
}

int main(void) {
    int a, b, pSum, pDiff;
    std::cout<<"input number: ";
    std::cin>>a>>b;
    getSumDiff(a, b, &pSum, &pDiff);
    std::cout<<"sum: "<<pSum<<std::endl;
    std::cout<<"sub: "<<pDiff<<std::endl;
    return 0;
}

