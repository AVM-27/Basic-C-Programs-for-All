/*
 * Filename    : pointers/array_of_pointers.c
 * Description : Demonstrates usage of an array of pointers pointing to elements of an integer array.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 * - Declares an integer array `var` with 3 elements.
 * - Creates an array of pointers `ptr[]`, where each element stores the address of an element in `var`.
 * - Prints values of `var[]` using pointer dereferencing.
 *
 * Sample Output:
 * Value of var[0] = 10
 * Value of var[1] = 100
 * Value of var[2] = 200
 */

#include <stdio.h>

#define MAX 3

int main() {
    int var[MAX] = {10, 100, 200};  // Integer array
    int *ptr[MAX];                  // Array of pointers to integers
    int i;

    // Assign address of each element in var[] to ptr[]
    for(i = 0; i < MAX; i++) {
        ptr[i] = &var[i];
    }

    // Print values using the array of pointers
    for(i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }

    return 0;
}
