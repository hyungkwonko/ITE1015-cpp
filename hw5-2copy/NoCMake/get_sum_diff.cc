#include <stdio.h>
#include <iostream>

using namespace std;

void getSumDiff(int a, int b, int& sum, int& diff) {
    sum = a + b;
    diff = a - b;
}

int main(void) {
    int a,b,s,d;
    cin >> a >> b;
    getSumDiff(a,b,s,d);

    cout << "a + b: " << s << endl;
    cout << "a - b: " << d << endl;
    
    return 0;
}
