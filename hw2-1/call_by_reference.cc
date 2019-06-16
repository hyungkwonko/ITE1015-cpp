
#include <iostream>
#include <stdio.h>

void square(double *a) {
    *a = (*a)*(*a);
}

int main() {
    double dvar;
    
    printf("input: ");
    scanf("%lf", &dvar);

    square(&dvar);
    std::cout<<"output: "<<dvar<<std::endl;
    return 0;

}
