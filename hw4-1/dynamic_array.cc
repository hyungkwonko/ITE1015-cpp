
#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter any integer: ";
    cin >> n;
    
    int *arr = new int[n];
    for(int i=0; i<n; i++) {
        arr[i] = i;
        cout << "arr[" << i << "] = " << i << endl;
    }
    delete[] arr;

    return 0;
}
