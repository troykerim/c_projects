/*
    Find the quadrant of Cartesian coordinate (X,Y) for two input angles
*/
#include <stdio.h>
int main()
{
    int x, y; // 2 angles

    printf("Cartesian coordinates finder.\n");
    printf("Enter X coordiante: ");
    scanf("%d", &x);
    printf("Enter Y coordiante: ");
    scanf("%d", &y);

    if(x > 0 && y > 0)
    {
        printf("Quadrant-I(+,+)\n");
    }
    else if(x > 0 && y < 0)
    {
        printf("Quadrant-II(+,-)\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("Quadrant-III(-,-)\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("Quadrant-IV(-,+)\n");
    }

    return 0;
}