#include <iostream>
#include "circle.h"

using namespace std;

int main(void) {
    double r, perimeter, area;
    cin >> r;
    perimeter = getCirclePerimeter(r);
    area = getCircleArea(r);
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    return 0;
}
