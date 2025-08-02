/*
 * ---------------
 * Note: This program takes two integer inputs from the user,
 * calculates their sum, and prints the result.
 */
#include <stdio.h> // Include standard I/O library for printf and scanf.

int main() {
    // Declare two integer variables to store the user's numbers.
    int a, b;

    // Prompt the user to enter two numbers.
    printf("Please enter the two numbers\n");

    // Read the first integer and store it in the address of 'a'.
    scanf("%d", &a);

    // Read the second integer and store it in the address of 'b'.
    scanf("%d", &b);

    // Calculate the sum of a and b and print it directly.
    printf("The sum of the two numbers is %d\n", a + b);

    return 0; // Indicate successful execution.
}
