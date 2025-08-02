/*
 * File: 02.c
 * ----------
 * Correction: The original code used an incorrect format specifier (%lf)
 * for a float variable 'x'. The correct specifier is %f. Using %lf with
 * printf for a float is acceptable due to type promotion, but %f is more
 * precise. For printing a double, %lf is correct.
 */
#include <stdio.h> // Include standard I/O library.

int main() {
    // Declare variables of different data types.
    float x, p;
    double y, q;
    unsigned int k; // 'unsigned' is a modifier, typically for 'int'.
    int m = 54321;
    long int n = 1234567890;

    // Assign values to the variables.
    x = 1.234567890000; // A float can't hold this much precision.
    y = 9.87654321;
    k = 54321;
    p = q = 1.0; // Assign 1.0 to both p and q.

    // Print the values using appropriate format specifiers.
    printf("m = %d\n", m);           // %d for int
    printf("n = %ld\n", n);         // %ld for long int
    printf("x (float) = %.7f\n", x); // %f for float, showing 7 decimal places.
    printf("y (double) = %.12lf\n", y); // %lf for double, showing 12 decimal places.
    printf("k (unsigned) = %u\n", k);   // %u for unsigned int
    printf("p = %f, q = %lf\n", p, q);   // %f for float, %lf for double

    return 0; // Indicate successful execution.
}
