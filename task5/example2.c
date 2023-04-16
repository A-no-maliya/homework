/*Упражнение 2.
Напишите программу которая совершает с двумя введёнными числами все алгебраические операции: +, -, *, /. 
И выводит резёльтат.*/

#include <stdio.h>

int main()
{
    int first, second;
    printf("enter two num:\n")
    scanf("%d%d", &first, &second);
    int res1 = first + second;
    int res2 = first - second;
    int res3 = first * second;
    int res4 = first / second;
    
    printf("res of addition: %d\n, res of subtraction: %d\n, res of multiplication: %d\n, res of division: %d\n", res1, res2, res3, res4);
    return 0;
}