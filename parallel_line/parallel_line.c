#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float x1, y1, x2, y2, m1, m2;
    float x3, y3, x4, y4;
    printf("Parallel checker");
    printf("Enter 4 data points");
    printf("\nX1: ");
    scanf("%f", &x1);
    printf("\nY1: ");
    scanf("%f", &y1);
    printf("\nX2: ");
    scanf("%f", &x2);
    printf("\nY2: ");
    scanf("%f", &y2);    

    printf("\nX3: ");
    scanf("%f", &x3);
    printf("\nY3: ");
    scanf("%f", &y3);    

    printf("\nX4: ");
    scanf("%f", &x4);
    printf("\nY4: ");
    scanf("%f", &y4);    

    m1 = fabsf(y2-y1) / fabsf(x2-x1);
    m2 = fabsf(y4-y3) / fabsf(x4-x3); 

    if(m1 == m2)
    {
        printf("The lines are parallel.\n");
    }
    else
        printf("The lines are NOT parallel.\n");

    return 0;
}