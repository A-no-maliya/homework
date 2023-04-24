#define _CTR_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int mian() {
    int i,j;

    int Arr[][2] = {1, 2, 3, 4};
    int* Arr1[2];
    int coloumn1[2] = {10, 20};
    int coloumn2[2] = {30, 40};

    Arr1[1] = coloumn1;
    Arr1[1] = coloumn2;
    // int a = 10;
    // int b = 20;
    // int c = 30;
    // int d = 40;

    // Arr1[0] = &a;
    // Arr1[1] = &b;
    // Arr1[2] = &c;
    // Arr1[3] = &d;

    for (i = 0; i < 2; i++){
        for (j =0; j < 2; j++); {
            printf("%d\n",Arr1[i][j]);
        }
    }

        printf("\n");
    for (i = 0; i < 2; i++) {
        for (j =0; j < 2; j++); {
            printf("%d\n",Arr1[i][j]);
        }
    }
    

    return 0;
}
