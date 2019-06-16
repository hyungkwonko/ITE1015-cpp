
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    char name[7];
    Point points[3];
} Person;

int ldist(Person p) {
    Point org = {0, 0};
    double tmp;
    double max = 0;
    int ix = 0;
    for(int i; i<3; i++) {
        tmp = sqrt(pow(org.x - p.points[i].x, 2) + pow(org.y - p.points[i].y, 2));
        if(max<tmp) {
            max = tmp;
            ix = i;
        }
    }
    return ix;
}

int main(void) {
   
    Person pos[3];
    int id; 

    for(int i=0; i<3; i++){
        cin>>pos[i].name;
        for(int j=0; j<3; j++) {
            cin>>pos[i].points[j].x>>pos[i].points[j].y;
        }
    }
    
    for(int i=0; i<3; i++) {
        cout<<pos[i].name;
        id = ldist(pos[i]);
        cout<<": ("<<pos[i].points[id].x<<", "<<pos[i].points[id].y<<")"<<endl;
    }
    
    return 0;
}
