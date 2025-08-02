/*
 * Filename    : Pointers/pointer_to_array.c
 * Description : Demonstrates pointers to arrays, pointer arithmetic, and how array pointers differ from element pointers.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 * - 'p' is a pointer to the first element of an array.
 * - 'ptr' is a pointer to the whole array (specifically, an array of 5 integers).
 * - Demonstrates how pointer arithmetic works in both cases.
 * - Shows how to access elements using both 'p' and 'ptr'.
 * - Explores the size of a pointer using sizeof().
 *
 * Sample Output:
 * p = 0x7ffc8b4a6a40
 * ptr = 0x7ffc8b4a6a40
 * *(p + 1) = 20
 * *(*ptr + 2) = 30
 * sizeof(p) = 8
 */

#include <stdio.h>

int main() {
    int *p;
    int (*ptr)[5];   // pointer to an array of 5 integers
    int arr[] = {10, 20, 30, 40, 50};

    p = arr;       // 'p' points to the first element
    ptr = &arr;    // 'ptr' points to the entire array

    // Print addresses
    printf("p = %p\n", (void *)p);
    printf("ptr = %p\n", (void *)ptr);

    // Pointer arithmetic: access second element
    printf("*(p + 1) = %d\n", *(p + 1));

    // Pointer to array access: move 2 elements ahead
    printf("*(*ptr + 2) = %d\n", *(*ptr + 2));

    // Size of a pointer (not the size of the array)
    printf("sizeof(p) = %zu\n", sizeof(p));

    return 0;
}
