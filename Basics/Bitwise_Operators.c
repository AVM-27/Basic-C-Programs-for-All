/*
 * File: bitwise.c
 * ---------------
 * Note: This program demonstrates bitwise operators, which perform operations
 * on the individual bits of integer data.
 * a=2 (0010), b=3 (0011)
 */
#include <stdio.h> // Include standard I/O library.

int main() {
    // Initialize integer variables.
    int a = 2; // Binary: ...0010
    int b = 3; // Binary: ...0011

    // Bitwise AND (&): result bit is 1 only if both operand bits are 1.
    // 0010 & 0011 -> 0010 (Decimal 2)
    printf("a & b = %d\n", a & b);

    // Bitwise OR (|): result bit is 1 if at least one operand bit is 1.
    // 0010 | 0011 -> 0011 (Decimal 3)
    printf("a | b = %d\n", a | b);

    // Bitwise XOR (^): result bit is 1 if operand bits are different.
    // 0010 ^ 0011 -> 0001 (Decimal 1)
    printf("a ^ b = %d\n", a ^ b);

    // Bitwise Complement (~): Inverts all bits. The result depends on integer size.
    // ~0011 -> ...1100 (Decimal -4 in two's complement)
    printf("~b = %d\n", ~b);

    // Left Shift (<<): Shifts bits to the left, filling with zeros. (Equivalent to multiplying by 2^n)
    // 2 << 3 means shifting ...0010 left by 3 bits -> ...10000 (Decimal 16)
    printf("a << 3 = %d\n", a << 3);

    // Right Shift (>>): Shifts bits to the right. (Equivalent to dividing by 2^n)
    // 3 >> 2 means shifting ...0011 right by 2 bits -> ...0000 (Decimal 0)
    printf("b >> 2 = %d\n", b >> 2);

    return 0; // Indicate successful execution.
}
