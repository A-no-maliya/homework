#include <stdio.h>
#include <stdlib.h>

void ponters(int* ptr, const int* value, int arr1[]);

int main() {
    int* ptr;
    int a = 13;
    ptr = &a;
    printf("Pointer inside: %p\n", ptr);
    printf("Pointer: %p\n", &ptr);
    printf("Pointer: %p\n", &a);

    int arr[]={3, 4, 5};
    int arr1[]={30, 40, 50};
    int* ptrArr = arr;             // the same writing
    int* ptrArr2 = &arr[0];

    printf("ptrArr: %d\n", *(&arr[0]));         // if & - take adress of variable
    printf("ptrArr2: %p\n", *arr);
    
    pointers(ptr, &a, arr, &arr1);
    printf("\n\nMain : &d\n", arr[2]);
    
    return 0;
}

void pointers(int* ptr, const int* value, int arr[], int* arr1) {
printf("\n\n5d\n", *value);

    printf("\n\n%d\n:", arr[2]);
    arr[2] = 8000;
    arr1 = arr1 + 1;
    printf("\n\n%d\n", arr1[2]);

    // printf("\n\n%d\n", *value);

}