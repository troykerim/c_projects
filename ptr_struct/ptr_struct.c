#include <stdio.h>
struct EmpAddress {
    char *ename;        // Employee name (string pointer)
    char stname[20];    // Street name (array of characters)
    int pincode;        // Pincode (integer)
} 
// Initializing an instance of the structure with data
employee = {"Mark Ryan", "Tiara Blvd \n", 654134}, *pt = &employee;

int main() {
    
    printf("\n\n Pointer : Show the usage of pointer to structure :\n");
    // Printing employee details using pointer to structure
    printf(" %s from %s \n\n", pt->ename, (*pt).stname);
    return 0;
}