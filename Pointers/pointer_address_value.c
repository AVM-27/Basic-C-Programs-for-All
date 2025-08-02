/*
 * Filename    : pointers/pointer_address_value.c
 * Description : Demonstrates how to access the value and address of a variable using a pointer.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Declares an integer variable and initializes it.
 *  - Assigns its address to a pointer.
 *  - Prints the value using the pointer and confirms address consistency.
 *
 * Sample Output:
 * The value at *p is 6
 * The address of *p is 0x7ffeef9c1a8c
 * The address of variable a is 0x7ffeef9c1a8c
 */

#include <stdio.h>

int main() {
    int a = 6;          // Integer variable
    int *p = &a;        // Pointer 'p' holds the address of variable 'a'

    // Accessing value and address using pointer
    printf("The value at *p is %d\n", *p);
    printf("The address of *p is %p\n", (void *)p);    // Use %p for address
    printf("The address of variable a is %p\n", (void *)&a);  // Confirm consistency

    return 0;
}
