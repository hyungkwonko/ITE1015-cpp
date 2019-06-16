#include "simple_shape.h"
#include <iostream>

using namespace std;

int main() {
    char p[1];
    int a[4];
    while(true) {
        cin >> p[0];
        if(p[0] == 'C' || p[0] == 'c') {
            for(int i=0; i<3; i++)
                cin >> a[i];
            Circle c1(a[0],a[1],a[2]);
            cout << "area: " << c1.getArea() << endl;
            cout << "perimeter: " << c1.getPerimeter() << endl;
        } else if(p[0] == 'R' || p[0] == 'r') {
            for(int i=0; i<4; i++)
                cin >> a[i];
            Rectangle d1(a[0],a[1],a[2],a[3]);
            cout << "area: " << d1.getArea() << endl;
            cout << "perimeter: " << d1.getPerimeter() << endl;
        } else if(p[0] == 'Q' || p[0] == 'q') {
            cout << "end of process..." << endl;
            break;
        } else {
            cout << "try again..." << endl;
            continue;
        }
    }
    return 0;
}
