#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

using namespace std;

int main(void) {
    
    int n;
    cout << "number: ";
    cin >> n;
    if(n%2 != 1) {
        cout << "valid number required." << endl;
        exit(0);
    }

    // dynamic memory allocation
    int **arr = new int*[n];
    for(int i=0; i<n; i++) {
        arr[i] = new int[n];
        memset(arr[i], 0, sizeof(int)*n);
    }

    // function call
    arr = sudoku(arr, n);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        printf("\n");
    }

    // free memory
    for(int i=0; i<n; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}
