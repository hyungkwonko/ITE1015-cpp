
#include <iostream>
using namespace std;

double arr[] = {1.1,2.2,3.3,4.4,5.5};

double* parr = &arr[0];

int main() {
    for(int i=0; i<5; i++) {
        *(parr+i) = *(parr+i)*2;
        cout<<*(parr+i)<<endl;
    }
    return 0;
}
