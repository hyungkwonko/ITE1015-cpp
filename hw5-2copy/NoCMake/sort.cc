
void sort(int *arr, int size) {
    int i, j, tmp;
    for (i = size; i > 0; i--) {
        for (j = 0; j < i-1; j++) {
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
