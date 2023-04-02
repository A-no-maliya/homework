#include <stdio.h>
#include <stdbool.h>


int first_task(double, double); 

int main()
{
    // checking the points of the circle arc - it must be - True(1)
    double x1 = 5;                           
    printf("%lf\n", x1);
    double y1 = 0;                                                
    printf("%lf\n", y1); 

    printf("%d\n\n", first_task(x1, y1));
    
// checking the points of the circle arc - it must be - True(1)
    double x2 = 0;                            
    printf("%lf\n", x2);
    double y2 = 5;
    printf("%lf\n", y2); 
    printf("%d\n\n", first_task(x2, y2));

// checking the points of the circle arc - it must be - True(1)
    double x3 = 10;                            
    printf("%lf\n", x3);
    double y3 = 5;
    printf("%lf\n", y3);

    printf("%d\n\n", first_task(x3, y3));

// checking the points of the circle arc - it must be - True(1)
    double x4 = 5;                            
    printf("%lf\n", x4);
    double y4 = 10;
    printf("%lf\n", y4); 

    printf("%d\n\n", first_task(x3, y3));

// checking points on axes - it must be - True(1)
    double x5 = 0;                            
    printf("%lf\n", x5);
    double y5 = 0;
    printf("%lf\n", y5); 

    printf("%d\n\n", first_task(x5, y5));

// checking the circle points - it must be - False(0)
    double x6 = 5;                            
    printf("%lf\n", x6);
    double y6 = 5;
    printf("%lf\n", y6); 

    printf("%d\n\n", first_task(x6, y6));
    return 0;

// random non-integers in the circle - it must be - False(0)
    double x7 = 5;                            
    printf("%lf\n", x7);
    double y7 = 9.7;
    printf("%lf\n", y7); 

    printf("%d\n\n", first_task(x7, y7));
    return 0;

// checking negative points - it must be - False(0)
    double x8 = -1.5;                            
    printf("%lf\n", x8);
    double y8 = -1.5;
    printf("%lf\n", y8); 

    printf("%d\n\n", first_task(x8, y8));
    return 0;

// random non-integers - it must be - True(1)
    double x9 = 1.5;                            
    printf("%lf\n", x9);
    double y9 = 1.5;
    printf("%lf\n", y9); 

    printf("%d\n\n", first_task(x9, y9));
    return 0;

// random points out of circle - it must be - False(0)
    double x10 = 5;                            
    printf("%lf\n", x10);
    double y10 = 60;
    printf("%lf\n", y10); 

    printf("%d\n\n", first_task(x10, y10));
    return 0;


}


int first_task(double x, double y){
    return (((x >= 0) && (x <= 5)) && ((x >= 0) && (x <= 5)) && (((x - 5) * (x - 5)) + (y - 5) * (y - 5) >= 25));
    }