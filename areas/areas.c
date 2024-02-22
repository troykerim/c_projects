/*

Calculates the area of a square, circle, triangle, rectangle.

*/
#include <stdio.h>

double circle(double radius);
int square(int side);
int rectangle(int length, int width);
double triangle(double base, double height);

int main()
{   

    int choice, side, length, width;
    double radius, area, base, height;
    


    printf("This program will calculate the area of the following and make a selection which one you want: ");
    printf("\n1. Circle");
    printf("\n2. Square");
    printf("\n3. Rectangle");
    printf("\n4. Triangle");
    printf("\nEnter a choice: ");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nEnter a radius: ");
            scanf("%lf", &radius);
            area = circle(radius);

            printf("\nThe area of a circle is: %lf", area);

            break;
        case 2:
            printf("\nEnter a side: ");
            scanf("%d", &side);
            int area_of_square = square(side);
            printf("The area of the square is: %d", area_of_square);
            break;

        case 3:
            printf("\nEnter a length and width: ");
            scanf("%d %d", &length, &width);
            int area_of_rectangle = rectangle(length, width);
            printf("\nThe area of the rectangle is: %d", area_of_rectangle);

            break;

        case 4:
            printf("\nEnter a base and height: ");
            scanf("%lf %lf", &base, &height);

            double area_of_triangle = triangle(base, height);
            printf("The area of the triangle is: %lf", area_of_triangle);

            break;
        default:
            printf("\nEnter a number between 1 and 4. Try again.");
            break;
    }

    
    printf("\n");
    return 0;
}

double circle(double radius)
{
    double pie = 3.14;
    double result;
    return result = (double)(pie*radius*radius);
}


int square(int side)
{
    return side*side;
}

int rectangle(int length, int width)
{   int result;
    result = length*width;
    return result;
}

double triangle(double base, double height)
{
    double result;
    result = (base*height) / 2;
    return result;
}
