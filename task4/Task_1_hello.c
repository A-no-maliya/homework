#include <stdio.h>

int main(int argс, char* argv[])                 // int argc is the first arg is how many arg heva main; argv is a pointer to an array of pointers to strings
{                                                //Empty square brackets (in the 1 str) indicate that the array has an indefinite length
    printf("Hello, %s!\n", argv[1]);             // fun for show phrase Hello + null coz i put 1 for array of arg-s
        
    getchar();                                   // not close compel exe before ur writing smth
    return 0;
} 


/*
Задания:

    1. Скомпилируйте программу через терминал с выдачей файлов промежуточных этапов.
        (Preprocess -> Compile -> Assemble -> Link, см. help для gcc) 
        Что происходит на каждом этапе?

    2. Скомпилируйте программу в VS Code. 

    3. Сломайте эту программу.
        Удалите последовательно из кода программы символы: ;, ), {
        И попробуйте выполнить программу. 
        Проанализируйте ошибки на которые укажет компилятор
    
    4. Доработайте программу
         
        (вместо "Hello, World!", должно быть "Hello, <Параметр>!")

*/