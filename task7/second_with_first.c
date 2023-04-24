/* Наилучшим алгоритмом среди указанных для сортировки 
словаря будет алгоритм выбора (selection sort), 
так как он имеет наименьшую сложность по сравнению с 
пузырьковой и расчесочной сортировками. За одну итерацию 
алгоритма выбора мы находим наименьший элемент и помещаем 
его на первое место, а затем повторяем этот процесс для 
всех оставшихся элементов списка. 

Однако, не все словари одинаково эффективно сортируются 
алгоритмом выбора, так как он имеет квадратичную сложность 
и может работать дольше на больших данных или на словарях 
со сложным расположением элементов. 

время для такого маленького кол-ва слов не изменятся, 
предполагаю, если увеличить массив, то время будет 
различным. И результат будет зависеть от выбранного 
алгоритма и его сложности (квадратич функции или же 
логарифмической)*/

#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_WORDS 10
#define MAX_LENGTH 20
#define ELIF else if

// n - number of elements/words in users arrays

void selection_sort(char words[MAX_WORDS][MAX_LENGTH], const int n) {
    int i, j, min_index;
    char temp[MAX_LENGTH];
    for (i = 0; i < n-1; i++) {
        min_index = i;
        for (j = i+1; j < n; j++) {
            if (strcmp(words[j], words[min_index]) < 0) {
                min_index = j;
            }
        }
        if (min_index != i) {
            strcpy(temp, words[i]);
            strcpy(words[i], words[min_index]);
            strcpy(words[min_index], temp);
        }
        printf("Selection Sort: Iteration %d: ", i+1);
        for (j = 0; j < n; j++) {
            printf("%s ", words[j]);
        }
        printf("\n");
    }
}

void bubble_sort(char words[MAX_WORDS][MAX_LENGTH], int n) {
    int i, j;
    char temp[MAX_LENGTH]; 
    for (i = 0; i < MAX_WORDS; i++) {
      for (j = 0; j < MAX_WORDS - i; j++) {
         if (strcmp(words[j], words[j+1]) > 0) {
            strcpy(temp, words[j]);
            strcpy(words[j], words[j+1]);
            strcpy(words[j+1], temp);
         }
      }
   }
    printf("Bubble Sort iterations %d: ", i+1);
        for (int k = 0; k < MAX_WORDS; k++) {
            printf("%s ", words[k]);
        }
        printf("\n");
    }   


/* The main idea of the "comb" is 
to initially take a sufficiently 
large distance between the compared 
elements and, as the array is ordered, 
narrow this distance down to the 
minimum. Thus, we sort of comb the 
array, gradually smoothing it into 
more and more neat strands.
*/
void comb_sort(char (*words)[MAX_LENGTH], int n) {
    int gap = n;
    float shrink_factor = 1.3;
    int i, j;
    char temp[MAX_LENGTH];
    int swapped;

    while (gap > 1 || swapped) {
        if (gap > 1) {
            gap = (int)(gap / shrink_factor);
        }
        swapped = 0;
        for (i = 0, j = gap; j < n; i++, j++) {
            if (strcmp(*(words + i), *(words + j)) > 0) {
                strcpy(temp, *(words + i));
                strcpy(*(words + i), *(words + j));
                strcpy(*(words + j), temp);
                swapped = 1;
            }
        }
        printf("Comb Sort iterations: %d\n ", n - gap);
        for (i = 0; i < n; i++) {
            printf("%s ", *(words + i));
        }
        printf("\n");
    }
}

int main() {
    char arr[MAX_WORDS];
    char user_array[MAX_WORDS][MAX_LENGTH];
    int i, choise;

    printf("Enter 10 words (lowercase and latin characters only):\n");
    scanf("%20s", arr);

    for (i = 0; i < 10; i++) {
        scanf("%s", user_array[i]);
    }
    printf("\nInitial array: ");

    for (i = 0; i < 10; i++) {
        printf("%s ", user_array[i]);
    }

    printf("\n\nChoose sorting algorithm:\n1. Selection sort\n 2. Bubble_sort\n 3. Comb_sort\n 4. All\n");
    scanf("%d", &choise);
    
    if (choise == 1) {
        time_t t0 = time(0);
        selection_sort(user_array, 10);
        time_t t1 = time(0);

        for (int i = 0; i < 10; i++ ) {
    
            printf("%s\n", user_array[i]);
    }
    
    double time_in_seconds = difftime(t1, t0);
        printf("%f", time_in_seconds);
    }

    ELIF (choise == 2) {
        time_t t0 = time(0);
        bubble_sort(user_array, 10);
        time_t t1 = time(0);

        for (int i = 0; i < 10; i++ ){
    
            printf("%s\n", user_array[i]);
        }
    
    double time_in_seconds = difftime(t1, t0);
        printf("%f", time_in_seconds);
    }

    ELIF (choise == 3) {
        time_t t0 = time(0);
        comb_sort(user_array, 10);
        time_t t1 = time(0);

        for (int i = 0; i < 10; i++ ) {
    
            printf("%s\n", user_array[i]);
        }
   
    double time_in_seconds = difftime(t1, t0);
        printf("%f", time_in_seconds);
    }
    
    ELIF (choise == 4) {
        time_t t0 = time(0);
        selection_sort(user_array, 10);
        time_t t1 = time(0);
        
        double time_in_seconds = difftime(t1, t0);
        printf("%f\n", time_in_seconds);
        
         t0 = time(0);
        bubble_sort(user_array, 10);
         t1 = time(0);
         
         time_in_seconds = difftime(t1, t0);
        printf("%f\n", time_in_seconds);
        
         t0 = time(0);
        comb_sort(user_array, 10);
         t1 = time(0);
         
         time_in_seconds = difftime(t1, t0);
        printf("%f\n", time_in_seconds);
    
    }
    
    return 0;
}

/*P.S. i didn't use function for writting array coz i have beautiful code without it... in my opinion*/ 

/*In the `strcmp()` and `strcpy()` operators, 
we use a dereferenced pointer, since the words 
themselves are pointers to `char`. In the `for` 
loop statements, we also use a dereferenced 
pointer to access the array elements.*/