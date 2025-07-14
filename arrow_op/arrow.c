/*
    -> operator
    . dot notation
    
    array saves us from using the dereference operator
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

int main()
{
    Point p1;
    p1.x = 3;
    p1.y = 2;
    
    printf("p1: (%d,%d)\n", p1.x, p1.y);
    
    Point *p2; // Pointer to a struct, store memory address of struct
    p2 = &p1;  // p2 is now pointing to p1. We can now access the memory variables of p1 using ->
    
    p2->x = 5;
    p2->y = 10;
    
    printf("p1: (%d,%d)\n", p1.x, p1.y);
    printf("p2: (%d,%d)\n", p2->x, p2->y); 
    
    // Make space dynamically
    
    Point *p3;
    
    /*
        Get enough space to store something as large as a "Point"
        Returns how many bytes needed to store a Point, returns a memory address for a block of memory 
        P3 will contain that memory address
    */
    p3 = malloc(sizeof(Point)); 
    p3->x = 10;
    p3->y = 20;
    printf("p3: (%d,%d)\n", p3->x, p3->y); 
    
    
    /*
        Getting memory variables using dereference operator + dot operator
    */
    (*p3).x = 2; // Do dereference first before . operator
    (*p3).y = 4;
    
    printf("p3: (%d,%d)\n", (*p3).x, (*p3).y); 

    return 0;
}