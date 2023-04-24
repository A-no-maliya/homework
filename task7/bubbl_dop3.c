#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    const int n = 10000;
    int arr[n];
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        arr[i] = rand();
    }

    printf("Unsorted array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    clock_t begin = clock();
    bubbleSort(arr, n);
    clock_t end = clock();

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\n\nSorted array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n\nTime elapsed: %f seconds\n", time_spent);
    return 0;
}