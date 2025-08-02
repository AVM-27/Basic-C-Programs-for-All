/*
 * Filename    : Basics/sum_of_two_doubles.c
 * Description : This corrected program demonstrates the use of double-precision
 *               floating-point variables, proper initialization, and formatted output.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * (no input required)
 *
 * Sample Output:
 * The sum is: 5.600000
 */

#include <stdio.h> // Include standard I/O library

int main() {
    double a, b, sum; // Declare double-precision variables

    a = 2.1;
    b = 3.5; // Correct: initialize before use

    sum = a + b; // Calculate sum

    printf("The sum is: %lf\n", sum); // Correct format specifier for double

    return 0; // Successful execution
}
