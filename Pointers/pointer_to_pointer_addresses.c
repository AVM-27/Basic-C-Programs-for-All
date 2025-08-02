/*
 * Filename    : Pointers/pointer_to_pointer_addresses.c
 * Description : Demonstrates how a pointer can store the address of another pointer,
 *               and how addresses propagate through single and double indirection.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 * - Declares an integer variable `num`
 * - Creates a pointer `pr1` pointing to `num`
 * - Creates a pointer to pointer `pr2` pointing to `pr1`
 * - Prints the address stored in `pr1` (i.e., address of `num`)
 * - Prints the address stored in `pr2` (i.e., address of `pr1`)
 *
 * Sample Output:
 * The address of the variable is 0x7ffee482a6bc
 * The address of the pointer storing the address the variable is 0x7ffee482a6c0
 */

#include <stdio.h>

int main() {
    int num = 123;        // Integer variable
    int *pr1;             // Pointer to integer
    int **pr2;            // Pointer to pointer to integer

    pr1 = &num;           // pr1 stores address of num
    pr2 = &pr1;           // pr2 stores address of pr1

    // Always cast to void* when printing addresses with %p
    printf("The address of the variable is %p\n", (void *)pr1);
    printf("The address of the pointer storing the address of the variable is %p\n", (void *)pr2);

    return 0;
}
