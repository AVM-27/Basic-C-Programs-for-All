/*
 * Filename    : pointers/pointer_basics.c
 * Description : Demonstrates basic pointer usage including assignment, dereferencing,
 *               and modifying the value of a variable through its pointer.
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
    int *ptr;   // Pointer to integer
    int x;      // Integer variable

    ptr = &x;   // ptr now holds the address of x
    *ptr = 0;   // Assign 0 to x using the pointer

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5;  // Add 5 to the value of x via pointer
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;   // Increment the value of x via pointer
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}
