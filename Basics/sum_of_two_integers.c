/*
 * Filename    : basics/sum_of_two_integers.c
 * Description : This program takes two integer inputs from the user,
 *               calculates their sum, and prints the result.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * Please enter the two numbers
 * 3
 * 7
 *
 * Sample Output:
 * The sum of the two numbers is 10
 */

#include <stdio.h> // Include standard I/O library for printf and scanf

int main() {
    int a, b; // Variables to hold user input

    printf("Please enter the two numbers\n");

    scanf("%d", &a); // Read first number
    scanf("%d", &b); // Read second number

    printf("The sum of the two numbers is %d\n", a + b); // Print result

    return 0; // Successful execution
}
