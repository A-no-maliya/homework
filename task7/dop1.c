/*Corrections:
- In the swap_pointers() function, we pass the 
addresses of pointers to pointers in order to 
change the values of these pointers.
- Since s1 and s2 allocated memory via malloc, 
we need to free this memory at the end of the 
program using the free() function.
- In the swap_pointers() function, we create a 
temporary variable tmp and copy the value of 
the pointer x into it. Then we change the 
values of the pointers x and y*/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
 
void swap_nums(int* x, int* y); 
void swap_pointers(char** x, char** y); 
 
int main(int argc, char* argv[]){ 
   int a, b; 
   char* s1 = (char*)malloc(200 * sizeof(char));    
   char* s2 = (char*)malloc(200 * sizeof(char)); 
   
   a = 3; b = 4;    
   swap_nums(&a, &b);    
   printf("a is %d\n", a);    
   printf("b is %d\n", b);    
    
   strcpy(s1, "I should print second");    
   strcpy(s2, "I should print first"); 
   swap_pointers(&s1, &s2);    
   printf("s1 is %s\n", s1);    
   printf("s2 is %s\n", s2); 

   free(s1);
   free(s2);
   
   return 0; 
}  

void swap_nums(int* x, int* y){    
    int tmp = *x; 
    *x = *y; 
    *y = tmp; 
} 

void swap_pointers(char** x, char** y) {    
    char* tmp = *x;
    *x = *y; 
    *y = tmp; 
}

/* This code swaps two numbers and two character 
pointers. The swap_num function is a basis swap 
function that sweeps the values of two integers 
using pointers. The swap_pointers function swap 
the values of two character pointers, but it 
does not work as intended. The problem is that 
it creates a new pointer (tmp) and assigns the 
value of the first pointer (x) to it, and then 
assigns the value of the second pointer (y) to x, 
and the value of tmp to y. However, this only swaps 
the values of the pointers themselves, not the 
actual values they point to. To fix this, the 
function should use pointer to pointer (char**) 
and swap the values that point to */
