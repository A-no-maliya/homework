// не получилось довести до конца
// dynamic array

/*realloc allows you to change the size of the previously 
allocated memory and gets the old pointer and the new 
memory size in bytes as arguments*/

#include <stdio.h>
#include <stdlib.h>

void print(int* arr, int count) {                                    //Display an array on the screen (print)
    printf("Array:\n");                                 
    for(int i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int* append(int* arr, int count, int elem) {                         // append function
    int* new_arr = realloc(arr, (count++) * sizeof(int));             // allocating memory for a new element

    // we check that the memory allocation was successful
    if(new_arr == NULL){
        printf("Error: out of memory\n");
        return NULL;
    }
    new_arr[count] = elem;                                          // adding an element to the end of the array
    return new_arr;
}
 
int* insert(int* arr, int count, int elem, int index) {              // insert function
    if(index > count - 1 || index < 0){                             // checking for non-negativity and the presence of an index in the array
        printf("The index goes outside the array\n");
        return arr;
    }
    int* new_arr = realloc(arr, (count+1) * sizeof(int));             // allocating memory for a new element
    
    // we check that the memory allocation was successful
    if(new_arr == NULL){
        printf("Memory overallocation error\n");
        return NULL;
    }
    
    for (int i = count - 1; i >= index; i--) {                      // shift the elements to the right, starting from the end of the array for new elem
        new_arr[i + 1] = new_arr[i];
    }
    
    new_arr[index] = elem;                                          // inserting a new element in place of the index
    return new_arr;
}

int main() {
    int count;
    printf("Enter the size of the array: ");
    scanf("%d", &count);
   
    int* arr = malloc(count * sizeof(int));                          // allocating memory for an array
    if (arr == NULL) {
        printf("Error: out of memory\n");
        return 1;
    }
    
    printf("Enter the elements of the array:\n");                   // filling in the array with input from the user
    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }
    printf(arr, count);
}
