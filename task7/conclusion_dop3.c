/*побоялась перегрузить ноутбук, поэтому разделила алгоритмы на 3 разных файла*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
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
    selectionSort(arr, n);
    clock_t end = clock();

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\n\nSorted array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n\nTime elapsed: %f seconds\n", time_spent);
    return 0;
}

/*затраченное время:
0,053 секунды - сорт выбор.
0.129000 seconds - bubble
0.002000 seconds - расческа

расческа самая эффективная в моем случае, 
т.к. она основана на пузырькой 
сорт, но с изм шага, поэтому изм итоговая 
функция для расчета времени и работы алгоритма
*/