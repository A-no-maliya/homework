#include <stdio.h>

void test();
void positive();
void negative();

int main()
{
    test();
    test();
    test();
}
    void test() {
    int a;

    printf("Enter an integer:");
    scanf_s("%d", &a);
    if (a > 0) { positive(); }
    else if (a < 0) { negative(); }
    else { printf("Zero\n\n"); }
}

void positive() {
    printf("Positive\n\n");
}

void negative() {
    printf("Negative\n\n");
}