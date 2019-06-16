
#include <iostream>
#include "sort.h"

using namespace std;

int main(void) {
    int n;
    cout << "number of elements: ";
    cin >> n;

    int* arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, n);
    for(int i=0; i<n; i++) {
        cout << arr[i];
        if(i < n-1)
            cout << " ";
        else
            cout << "\n";
    }

    delete[] arr;
    return 0;
}
