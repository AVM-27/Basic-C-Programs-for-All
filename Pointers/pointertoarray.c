/*
 * Filename    : Pointers/pointertoarray.c
 * Description : Demonstrates pointers to arrays and pointer arithmetic.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * p = 0x7ffcb3c6a890
 * ptr = 0x7ffcb3c6a890
 * *(p+1) = 20
 * *(*ptr + 2) = 30
 * sizeof(p) = 8
 */

#include <stdio.h>

int main() {
    int *p;
    int (*ptr)[5];
    int arr[] = {10, 20, 30, 40, 50};

    p = arr;      // pointer to first element of array
    ptr = &arr;   // pointer to the whole array

    printf("p = %p\n", (void *)p);
    printf("ptr = %p\n", (void *)ptr);
    printf("*(p + 1) = %d\n", *(p + 1));
    printf("*(*ptr + 2) = %d\n", *(*ptr + 2));
    printf("sizeof(p) = %zu\n", sizeof(p));

    return 0;
}
