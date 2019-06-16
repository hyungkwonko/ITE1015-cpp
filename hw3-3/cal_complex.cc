
#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct {
    double x, y;
} Comp;

void printComplex(Comp tmp, string str) {
    std::cout<<str<<":\n";
    std::cout<<tmp.x<<" + "<<tmp.y<<"i\n";
}

void printAddComp(Comp tmp1, Comp tmp2) {
    Comp sum;
    sum.x = tmp1.x + tmp2.x;
    sum.y = tmp1.y + tmp2.y;
    printComplex(sum, "sum of complex numbers");
}

void printMulComp(Comp tmp1, Comp tmp2) {
    Comp mul;
    mul.x = tmp1.x * tmp2.x - tmp1.y * tmp2.y;
    mul.y = tmp1.x * tmp2.y + tmp1.y * tmp2.x;
    printComplex(mul, "mul of complex numbers");
}

int main() {
    Comp cmp[2];
    std::cin>>cmp[0].x>>cmp[0].y>>cmp[1].x>>cmp[1].y;
    printComplex(cmp[0], "complex number 1");
    printComplex(cmp[1], "complex number 2");
    printAddComp(cmp[0], cmp[1]);
    printMulComp(cmp[0], cmp[1]);
}
