// now i don't understand loops and arrays enought, so  i do it in the dumbest way
#include <stdio.h>
#include <stdbool.h>


int first_task(double, double); 

int main()
{
// checking the operation of the code with the previous error, when (x,y) = (-5;4) - it must be - False(0)
    double x1 = -5;                           
    printf("%lf\n", x1);
    double y1 = 4;                                                
    printf("%lf\n", y1); 

    printf("%d\n\n", first_task(x1, y1));
    
// I wanted to make sure that the direct line belongs to the region - it must be - True(1)
    double x2 = 0;                            
    printf("%lf\n", x2);
    double y2 = 0;
    printf("%lf\n", y2); 
    printf("%d\n\n", first_task(x2, y2));

// I wanted to make sure that the direct line belongs to the region in one more point - it must be - True(1)
    double x3 = -4;                            
    printf("%lf\n", x3);
    double y3 = -4;
    printf("%lf\n", y3);

    printf("%d\n\n", first_task(x3, y3));

// checking points on axes - it must be - True(1)
    double x4 = 0;                            
    printf("%lf\n", x4);
    double y4 = -4;
    printf("%lf\n", y4); 

    printf("%d\n\n", first_task(x3, y3));

// checking points on axes - it must be - False(0)
    double x5 = 0;                            
    printf("%lf\n", x5);
    double y5 = 3;
    printf("%lf\n", y5); 

    printf("%d\n\n", first_task(x5, y5));

// checking points on axes - it must be - True(1)
    double x6 = -10;                            
    printf("%lf\n", x6);
    double y6 = 0;
    printf("%lf\n", y6); 

    printf("%d\n\n", first_task(x6, y6));
    return 0;

// checking points on axes - it must be - True(1)
    double x7 = 4;                            
    printf("%lf\n", x7);
    double y7 = 0;
    printf("%lf\n", y7); 

    printf("%d\n\n", first_task(x7, y7));
    return 0;

// random non-integers - it must be - True(1)
    double x8 = -1.5;                            
    printf("%lf\n", x8);
    double y8 = -1.5;
    printf("%lf\n", y8); 

    printf("%d\n\n", first_task(x8, y8));
    return 0;

// random non-integers - it must be - False(0)
    double x9 = 1.5;                            
    printf("%lf\n", x9);
    double y9 = 1.5;
    printf("%lf\n", y9); 

    printf("%d\n\n", first_task(x9, y9));
    return 0;

// random non-integers - it must be - True(1)
    double x10 = 4.5;                            
    printf("%lf\n", x10);
    double y10 = 3.5;
    printf("%lf\n", y10); 

    printf("%d\n\n", first_task(x10, y10));
    return 0;

// entering by users
    double x11, y11;
    printf("Enter ur coord for checking (x and y):\n");
    scanf("%lf%lf", &x11, &y11);                            

    printf("%d\n\n", first_task(x10, y10));
    return 0;
}


int first_task(double x, double y){
    bool res = ((x <= 0) && (y <= 0)) || ((y <= -x) && (y < 3) && (y >= 0) && (x <= 0)) || ((y <= -x) && (y <= 0) && (x >= 0) && (x < 4)) || ((x > 4) && (y > 3)) || (y <= -x);
	return res;
}