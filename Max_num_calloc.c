#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n = 5, max;
    arr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }
    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum: %d", max);
    free(arr);
    return 0;
}


