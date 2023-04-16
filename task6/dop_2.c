#include <stdio.h>

int main() {
    int n, i, j;                                                   // n - degree, i - rows, j - coloumns

    printf("Enter the degree of the Newton binomial: ");
    scanf("%d", &n);

    int pas[n + 1][n + 1];
     
    pas[0][0] = 1;                                       // Fill in the first line of the triangle
    for (int j = 1; j <= n; j++) {
        pas[0][j] = 0;
    }
  
    for (int i = 1; i <= n; i++) {                       // Fill in the remaining lines of the triangle
        pas[i][0] = 1;
        for (int j = 1; j <= n; j++) {
            pas[i][j] = pas[i - 1][j - 1] + pas[i - 1][j];
        }
    }
    
    
    printf("Pascal 's Triangle:\n");                    // We display Pascal's triangle on the screen
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pas[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
    Example of program output:

Enter the degree of the Newton binomial: 5
Pascal 's Triangle:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/