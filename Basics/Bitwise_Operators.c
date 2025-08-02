/*
 * Filename    : basics/Bitwise_operators.c
 * Description : Demonstrates all major bitwise operators in C — AND, OR, XOR,
 *               NOT (complement), left shift, and right shift — using integers.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * (no input required)
 *
 * Sample Output:
 * a & b = 2
 * a | b = 3
 * a ^ b = 1
 * ~b = -4
 * a << 3 = 16
 * b >> 2 = 0
 */

#include <stdio.h> // Standard I/O library

int main() {
    int a = 2; // Binary: 0010
    int b = 3; // Binary: 0011

    // Bitwise AND
    printf("a & b = %d\n", a & b); // 0010 & 0011 = 0010 (2)

    // Bitwise OR
    printf("a | b = %d\n", a | b); // 0010 | 0011 = 0011 (3)

    // Bitwise XOR
    printf("a ^ b = %d\n", a ^ b); // 0010 ^ 0011 = 0001 (1)

    // Bitwise NOT (Complement)
    printf("~b = %d\n", ~b);       // ~0011 = ...1100 (-4 in two's complement)

    // Left Shift
    printf("a << 3 = %d\n", a << 3); // 2 * 2^3 = 16

    // Right Shift
    printf("b >> 2 = %d\n", b >> 2); // 3 / 2^2 = 0

    return 0; // Successful execution
}
