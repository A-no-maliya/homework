#include <stdio.h>
// #include <stdlib.h>

int Bissctrice (double, double);
int Verikal (double , double);
int Gorisont (double, double);


int main()
{
    double x = 5.;
    printf("%lf\n", x);
    double y = -6.;
    print("%lf\n", y); 

    printf("%lf", Verikal(x, y) && Gorisont(x, y) || Bissctrice(x, y));
    return 0;
}


int Bissctrice(double a, double b){
    int res = -1;
    res = (a <= -b);
    return res;
    }

int Verikal(double x, double y){
    int res = -1;
    res = (x > 4);
    return res;}

int Gorisont(double x, double y){
    int res = -1;
    res = (y > 3);
    return res;}

/*
получаем на вход: х у
на выход должно быть: 1. 0

*/