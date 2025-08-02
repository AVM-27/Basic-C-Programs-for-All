/*
 * Filename    : pointers/print_value_and_address.c
 * Description : Reads an integer from the user and prints both its value and memory address.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Prompts the user to enter an integer.
 *  - Displays the entered value.
 *  - Displays the memory address of the variable using a pointer.
 *
 * Sample Output:
 * Enter the number
 * 42
 * The number is 42 and its address is 0x7ffeef9c1a8c
 */

#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter the number\n");
    scanf("%d", &num);

    // Output value and address
    printf("The number is %d and its address is %p\n", num, (void *)&num);

    return 0;
}
