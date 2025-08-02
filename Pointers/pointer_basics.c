/*
 * Filename    : pointers/pointer_basics.c
 * Description : 
 *   Demonstrates the fundamentals of pointers in C.
 *   Shows how to declare a pointer, assign it the address of a variable,
 *   use dereferencing to access and modify the variable's value,
 *   and apply arithmetic operations through the pointer.
 *
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * x = 0
 * *ptr = 0
 * x = 5
 * *ptr = 5
 * x = 6
 * *ptr = 6
 */

#include <stdio.h>

int main() {
    int *ptr;   // Pointer to an integer
    int x;      // Integer variable

    ptr = &x;   // ptr now holds the address of x
    *ptr = 0;   // Set x = 0 via pointer

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5;  // Add 5 to x via pointer
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;   // Increment x via pointer
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}
