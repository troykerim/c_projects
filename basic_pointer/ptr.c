/*
    Pointer - A variable that stores a memory address
    Pointer holds the memory address of another varaible.  
    The type for the pointer will be the type of the variable that the pointer is pointing to.
    
    & (operator) return the memory address of a variable
    * (operator) Derefence a pointer, get the value that is stored at a memory address
*/
#include <stdio.h>

int main()
{
    int *A; // "A" will store a memory address, expect it to store the memory address of an integer variable.  
    
    int b = 42; 
    // To have a point to b, we need to have a store the mem address of b! Use the & operator
    
    int *a = &b;  // Store b's memory address
    
    printf("Here is what is inside of b normally: %d\n", b);
    printf("Here is the memory address of b: %p\n", &b);
    printf("Here is the value of a: %p\n", a);
    
   /* 
    a will have the same memory address of b, b/c we we have storing b's memory address.
    We can use a (memory address of b AKA a pointer) to modify values of b 
    Use the * (star operator) to "Derefence a pointer",
    Derefencing a pointer allows us to modify the actual value at the memory address stored in the pointer.
    */
    
    *a = 50;    // Go get what a is pointing to and use that in assignments, expressions; IE modify it!
    printf("\nHere is what is inside of b now: %d\n", b);
    printf("Here is the memory address of b: %p\n", &b);
    printf("Here is the value of a: %p\n", a);
    
    //    Derefencing a pointer, gets what a the pointer is pointing to and works with that.

    return 0;
}