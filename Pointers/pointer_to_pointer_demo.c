/*
 * Filename    : Pointers/pointer_to_pointer_demo.c
 * Description : Demonstrates the concept of a pointer to a pointer.
 *               Shows how to access a variable's value and address using
 *               single and double indirection.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 * - Declares an integer variable `var`
 * - Uses a pointer `ptr` to hold its address
 * - Uses a pointer to pointer `pptr` to hold the address of `ptr`
 * - Prints values and addresses via direct, single-level, and double-level pointer access
 *
 * Sample Output:
 * Value of var = 3
 * Value available at *ptr = 3
 * Value available at **pptr = 3
 *
 * Address of var = 0x7ffce43e19ac
 * Address available at *ptr = 0x7ffce43e19ac
 * Address available at **pptr = 0x7ffce43e19ac
 */

#include <stdio.h>

int main() {
    int var = 3;         // Integer variable
    int *ptr;            // Pointer to integer
    int **pptr;          // Pointer to pointer to integer

    ptr = &var;          // ptr stores address of var
    pptr = &ptr;         // pptr stores address of ptr

    // Printing values
    printf("Value of var = %d\n", var);
    printf("Value available at *ptr = %d\n", *ptr);
    printf("Value available at **pptr = %d\n\n", **pptr);

    // Printing addresses
    printf("Address of var = %p\n", (void *)&var);
    printf("Address available at *pptr = %p\n", (void *)*pptr);
    printf("Address of ptr = %p\n", (void *)&ptr);
    printf("Address stored in pptr = %p\n", (void *)pptr);

    return 0;
}
