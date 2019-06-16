#include <stdio.h>
#include <iostream>

#include <cstdlib>
#include <ctime>

int** upperMiddle(int** arr, int n);
int** leftMiddle(int** arr, int n);
int** rightMiddle(int** arr, int n);
int** lowerMiddle(int** arr, int n);

int** sudoku(int** arr, int n) {

    srand((unsigned)time(0));
    int rand_int = rand()%4;
    switch(rand_int) {
        case 0:
            return upperMiddle(arr, n);
        case 1:    
            return leftMiddle(arr, n);
        case 2:    
            return rightMiddle(arr, n);
        case 3:    
            return lowerMiddle(arr, n);
        default:
            printf("check the rand_int please...\n");
            exit(1);
    }
}

int** upperMiddle(int** arr, int n) {
    for(int i=0, j=n/2, num=1; num<=n*n; num++) {
        arr[i][j] = num;
        if(num%n == 0) {
            i++;
        } else {
            i--, j++;
            if(i<0)
                i = n-1;
            if(j>(n-1))
                j = 0;
        }
    }
    return arr;
}

int** leftMiddle(int** arr, int n) {
    for(int i=n/2, j=0, num=1; num<=n*n; num++) {
        arr[i][j] = num;
        if(num%n == 0) {
            j++;
        } else {
            i++, j--;
            if(j<0)
                j = n-1;
            if(i>(n-1))
                i = 0;
        }
    }
    return arr;
}

int** rightMiddle(int** arr, int n) {
    for(int i=n/2, j=n-1, num=1; num<=n*n; num++) {
        arr[i][j] = num;
        if(num%n == 0) {
            j--;
        } else {
            i++, j++;
            if(j>(n-1))
                j = 0;
            if(i>(n-1))
                i = 0;
        }
    }
    return arr;
}

int** lowerMiddle(int** arr, int n) {
    for(int i=n-1, j=n/2, num=1; num<=n*n; num++) {
        arr[i][j] = num;
        if(num%n == 0) {
            i--;
        } else {
            i++, j++;
            if(j>(n-1))
                j = 0;
            if(i>(n-1))
                i = 0;
        }
    }
    return arr;
}
