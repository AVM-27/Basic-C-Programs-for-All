/*
 * File: ternary.c
 * ---------------
 * Note: This program demonstrates the ternary operator ( ? : ), which is a
 * shorthand for a simple if-else statement.
 * Syntax: condition ? value_if_true : value_if_false
 */
#include <stdio.h> // Include standard I/O library.

int main() {
    // Declare and initialize variables.
    int c = 6;
    int b = 6;
    int a;

    // Use the ternary operator.
    // The condition is (c == b). Since this is true (6 == 6), 'a' will be assigned the first value (3).
    // If it were false, 'a' would be assigned the second value (7).
    a = (c == b) ? 3 : 7;

    // Print the result.
    printf("The value of a is %d\n", a);

    return 0; // Indicate successful execution.
}
