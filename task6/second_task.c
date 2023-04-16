/*
    В этом примере мы сначала заполняем двумерный
    массив случайными числами и выводим его на экран.
    Затем запрашиваем у пользователя искомый элемент
    и передаем его в функцию `find_element`, которая
    ищет этот элемент в массиве с помощью двойного 
    цикла и возвращает индексы этого элемента в переменных
    `row` и `col`. Если элемент не найден, функция возвращает
    0. После этого мы проверяем, был ли найден элемент, 
    и если да, выводим его индексы на экран, используя 
    формулировку из условия задачи. Если элемент не 
    найден, выводим сообщение об этом.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5                               // number of rows
#define COLS 5                               // number of columns

// The function of searching for an element in the array. Returns 0 if the element is not found, 1 if found
int find_element(int arr[][COLS], int element, int *row, int *col) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == element) {
                *row = i;                                                   // saving the index of the row where the element is found
                *col = j;                                                   // saving the index of the column where the element is found
                return 1;                                                   // element found
            }
        }
    }
    return 0;                                                               // element not found
}

int main() {
    int arr[ROWS][COLS];                                       // the original two-dimensional array
    int element;                                               // the desired element
    int row, col;                                              // element indexes
    srand(time(NULL));                                         // initialize the random number generator

    // filling the array with random numbers (in the range from 0 to 999)
    printf("Source array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 1000;
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // requesting the desired element from the user
    printf("Enter the desired element: ");
    scanf("%d", &element);

    // we are looking for an element in the array and output the indexes of its location, if it is found
    if (find_element(arr, element, &row, &col)) {
        printf("\nThe %d element is in the %d row and column %d\n", element, row + 1, col + 1);
    } else {
        printf("\nElement not found\n");
    }

    return 0;
}


/*
    Example of program output:

Source array:
980     311     292     938     82
173     109     966     851     239
474     461     833     70      720
235     280     561     123     941
359     415     208     831     17
Enter the desired element: 123

The 123 element is in the 4 row and column 4 
*/

// P.S. SPACES AND TABS IN THE EXAMPLE ARE OUTPUT FOR EASY READING