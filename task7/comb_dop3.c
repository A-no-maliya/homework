#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int newGap(int gap) {
    gap = (gap * 10) / 13;
    if (gap < 1) {
        return 1;
    }
    return gap;
}

void comb_sort(int arr[], int n) {
    int swapped = 1, gap = n;
    while (swapped == 1 || gap > 1) {
        swapped = 0; 
        gap = newGap(gap);
        for (int i = 0; i < n-gap; ++i) {
            if (arr[i] > arr[i+gap]) {
                int temp = arr[i];
                arr[i] = arr[i+gap];
                arr[i+gap] = temp;
                swapped = 1;
            }
        }
        for (int i = n-gap-1; i >= 0; i--) {
            if (arr[i] > arr[i+gap]) {
                int temp = arr[i];
                arr[i] = arr[i+gap];
                arr[i+gap] = temp;
                swapped = 1;
            }
        }
    }
}

int main() {
    const int n = 10000;
    int arr[n];

    srand(time(NULL));                                      // random elements
    for (int i = 0; i < n; ++i) {
        arr[i] = rand();
    }
                                                        
    clock_t begin = clock();                                            // Замер затраченного времени на сортировку
    comb_sort(arr, n);
    clock_t end = clock();

     double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\n\nSorted array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n\nTime elapsed: %f seconds\n", time_spent);
    return 0;
}