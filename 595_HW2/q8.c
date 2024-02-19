#include <stdio.h>
#include <stdint.h>

int32_t SquareDistance(int32_t x1, int32_t y1, int32_t x2, int32_t y2);


int main()
{
    int32_t x1, x2, y1, y2;
    
    printf("Input 4 numbers: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    int32_t result = SquareDistance(x1, y1, x2, y2);
    printf("The squared distance: %d", result);
    return 0;
}

int32_t SquareDistance(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{
    int32_t dx = x1 - x2;
    int32_t dy = y1 - y2;
    int32_t distance = (dx*dx) + (dy*dy);
    
    return distance;
  
}