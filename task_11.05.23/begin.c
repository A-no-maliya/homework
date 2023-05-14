#include <stdio.h>

int main() {
    int a = 15;
    int arr[2] = {1, 3};
    void* ptr = &a;
    void* ptr2 = &arr[0];

    printf("%i\n", *((int *)ptr));

    return 0;
}