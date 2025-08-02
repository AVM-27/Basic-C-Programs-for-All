/*
 * Filename    : basics/Datatypes.c
 * Description : Introduction to basic data types in C. Demonstrates declaration,
 *               initialization, and output of common types like int, float,
 *               double, long, and unsigned int.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * (no input required)
 *
 * Sample Output:
 * Integer: 54321
 * Long Integer: 1234567890
 * Float: 1.234568
 * Double: 9.876543210000
 * Unsigned Int: 54321
 */

#include <stdio.h> // Standard I/O library

int main() {
    // Variable declarations
    int i = 54321;
    long int l = 1234567890;
    float f = 1.234567890000f;
    double d = 9.87654321;
    unsigned int u = 54321;

    // Output values
    printf("Integer: %d\n", i);
    printf("Long Integer: %ld\n", l);
    printf("Float: %.6f\n", f);             // 6 digits default for float
    printf("Double: %.12lf\n", d);          // Show more precision for double
    printf("Unsigned Int: %u\n", u);

    return 0;
}
