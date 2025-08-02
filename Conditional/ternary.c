/*
 * Filename    : Conditional/ternary.c
 * Description : This program demonstrates the ternary operator ( ? : ),
 *               a shorthand for a simple if-else statement.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * (no input required)
 *
 * Sample Output:
 * The value of a is 3
 */

#include <stdio.h> // Include standard I/O library

int main() {
    int c = 6;
    int b = 6;
    int a;

    // If c equals b, assign 3 to a; otherwise, assign 7
    a = (c == b) ? 3 : 7;

    printf("The value of a is %d\n", a);

    return 0; // Successful execution
}
