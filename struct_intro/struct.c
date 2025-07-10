#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char id[10];
    int age;
    int grades[4];
} Student;

typedef struct
{
    int x;
    int y;
} Point;

void print_points(Point *points);
// void print_points(Point points[]); Alternate way


int main(void)
{
    Student troy;

    printf("Age: %d\n", troy.age);
    strcpy(troy.name, "Troy");
    strcpy(troy.id, "000123123");
    troy.age = 26;
    troy.grades[0] = 1;
    troy.grades[1] = 7;
    troy.grades[2] = 3;
    troy.grades[3] = 8;

    printf("Name: %s\n", troy.name);
    printf("ID: %s\n", troy.id);
    printf("Age: %d\n", troy.age);
    for(int i = 0; i < 4; i++)
    {
        printf("%d ", troy.grades[i]);
    }
    printf("\n");

    Point points[10];
    for(int i = 0; i < 10; i++)
    {
        points[i].x = i;
        points[i].y = 10 - i;
    }
    print_points(points);
    return 0;
}

void print_points(Point *points)
{
    for(int i = 0; i < 10; i++)
    {
        printf("p%d = (%d,%d)\n", i, points[i].x, points[i].y);
    }
}