#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
   int arr[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);
     
     
    int i, j, k, duplicates;
    
    // заполняем матрицу рандомными значениями
    srand(time(0)); // устанавливаем seed для генерации рандомных чисел
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            arr[i][j] = rand() % 0;                        // взяла 0, чтобы точно проверить работу программы. Для рандомных числел тоже работает, но мала вероятность повторения полной строки
        }                                                  // а самой лень заполнять матрицу)
    }
    
    // выводим исходную матрицу
    printf("Исходная матрица:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    // удаляем повторяющиеся строки
    for (i = 0; i < rows - 1; i++) {
        for (j = i + 1; j < rows; j++) {
            duplicates = 1;
            for (k = 0; k < cols; k++) {
                if (arr[i][k] != arr[j][k]) {
                    duplicates = 0;
                    break;
                }
            }
            if (duplicates == 1) { // если строки повторяются, удаляем вторую из них
                for (k = 0; k < cols; k++) {
                    arr[j][k] = -1;
                }
            }
        }
    }
    
    // выводим результирующую матрицу
    printf("\nРезультирующая матрица:\n");
    for (i = 0; i < rows; i++) {
        int empty_row = 1;
        for (j = 0; j < cols; j++) {
            // проверяем, является ли текущая строка пустой
            if (arr[i][j] != -1) {
                empty_row = 0;
                printf("%d ", arr[i][j]);
            }
        }
        if (empty_row == 0) {
            printf("\n");
        }
    }
    
    return 0;
}

