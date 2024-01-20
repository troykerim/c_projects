#include <stdio.h>

float calculateRectangleArea(float length, float width);

int main()
{   
    float length = 0.0;
    float width = 0.0;
    printf("Enter a length: ");
    scanf("%f", &length);
    printf("\nEnter a width: ");
    scanf("%f", &width);

    
    float area = calculateRectangleArea(length, width);
    
    printf("The area of the rectangle is: %.2f\n", area);
    
    return 0;
}

// Function definition
float calculateRectangleArea(float length, float width)
{
    return length * width;
}