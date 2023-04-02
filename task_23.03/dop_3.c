#include <stdio.h>
#include <string.h>
#include <locale.h>

void testInput(char* str);

int main()
{
    char str[20];
    printf("Enter the string: ");
    gets(str);
    testInput(str);
    return 0;
}

void testInput(char* str)
{
    char str_new[20];
    int j = 0;
    char c;

    for (int i = 0; i < strlen(str); i++) {
        c = str[i];
        if (strchr(str_new, c) == NULL && c != ' ') {
            str_new[j] = c;
            j += 1;
        }
    }
    str_new[j] = '\0';
    printf("%s", str_new);
}