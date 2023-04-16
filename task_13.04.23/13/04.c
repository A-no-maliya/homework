#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLUMNS 2

int main() {
    // int i = 0;
    // int j = 0;
    // int twoArr[][2] = {{1, 2}, {3, 4}};     // нудно указ во вторых скобках кол-во столбцов - инчае - ошибка; это для оособого объявления в памяти
    // int twoArr1[][2] = {1, 2, 3, 4};
    // int C[8] = {1, [4]=200, 5};             // НЕ ФАКт что работает, но внутри сразу обращению в 4му по индедксу элементу

    // for(; i< ROWS; i++) {
    //     for (; j < COLUMNS; j++) {
    //         printf ("twoArr[%d][%d] = %d\n", i, j, twoArr[i][j]);
    //     }

    // }


// двумернуый массив с помощью прямого обраения к элементам и 2 циклами
int arrTwo[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("address = %p\n", &arrTwo[i][j]);
        }
    }

// двуверный массив с помощью указателя

int i = 0; // чтобы обращаться по индексам к элементам
int j = 0;
printf("\nOne loop:\n ");

int* ptr;
    for (ptr = &arrTwo[0][0]; ptr <= &arrTwo[2][3]; ptr++) {
        printf("arrTwo[%d][%d] = %d\n", i, j, arrTwo[i][j]);
    j++;
    if (j== 4) {
        i++;
        j = 0;
    }
    }


    return 0;
}