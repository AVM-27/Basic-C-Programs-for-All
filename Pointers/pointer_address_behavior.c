/*
 * Filename    : Pointers/pointer_address_behavior.c
 * Description : Demonstrates pointer usage, including assigning addresses, dereferencing,
 *               and showing how pointer changes reflect on the original variable.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 * - Reads an integer from the user
 * - Demonstrates how a pointer stores and accesses its address and value
 * - Shows that modifying a value through the pointer affects the original variable
 *
 * Sample Output:
 * Enter the number
 * 7
 * The address of your number is 0x7ffc78047f8c
 * The value of your number is 7
 *
 * The address of the pointer to your number is 0x7ffc78047f8c
 * The value stored in the pointer is 7
 *
 * When your number is 11
 * The address of the pointer to your number is 0x7ffc78047f8c
 * The value stored in the pointer is 11
 *
 * If the pointer value is 2
 * The address of your number is 0x7ffc78047f8c
 * The value of your number is 2
 */

#include <stdio.h>

int main() {
    int *pc, c;  // Pointer declaration and integer variable

    printf("Enter the number\n");
    scanf("%d", &c);

    // Print address and value of c
    printf("The address of your number is %p\n", (void *)&c);
    printf("The value of your number is %d\n\n", c);

    pc = &c;  // Pointer now stores the address of c

    // Accessing c through the pointer
    printf("The address of the pointer to your number is %p\n", (void *)pc);
    printf("The value stored in the pointer is %d\n\n", *pc);

    c = 11;  // Change the value of c
    printf("When your number is 11\n");
    printf("The address of the pointer to your number is %p\n", (void *)pc);
    printf("The value stored in the pointer is %d\n\n", *pc);

    *pc = 2;  // Modify c through the pointer
    printf("If the pointer value is 2\n");
    printf("The address of your number is %p\n", (void *)&c);
    printf("The value of your number is %d\n\n", c);

    return 0;
}
