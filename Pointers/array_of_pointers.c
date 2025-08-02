/*
 * Filename    : pointers/array_of_pointers.c
 * Description : Demonstrates usage of an array of pointers pointing to elements of an integer array.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * Value of var[0] = 10
 * Value of var[1] = 100
 * Value of var[2] = 200
 */

#include <stdio.h>

const int MAX = 3;

int main() {
    int var[MAX] = {10, 100, 200};  // Array of integers
    int *ptr[MAX];                  // Array of pointers to int
    int i;

    // Assign each pointer the address of the corresponding element in var
    for(i = 0; i < MAX; i++) {
        ptr[i] = &var[i];
    }

    // Print the values using pointers
    for(i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }

    return 0;
}
