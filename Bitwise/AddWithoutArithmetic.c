/*
 * Filename    : Bitwise/AddWithoutArithmetic.c
 * Description : Adds two integers without using arithmetic operators (+ or -),
 *               using bitwise operations instead.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - This program performs addition of two integers using only bitwise operators.
 *  - It uses the concept of full adder logic:
 *      1. XOR (`^`) gives the sum without carry.
 *      2. AND (`&`) + left shift (`<<`) gives the carry.
 *      3. The process is repeated until there is no carry left.
 *
 * Input:
 *  - Two integers (positive, negative, or zero).
 *
 * Output:
 *  - The sum of the two integers.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:
 *      Enter two integers: 5 3
 *    Output:
 *      Sum = 8
 *
 *  Example 2:
 *    Input:
 *      Enter two integers: -7 10
 *    Output:
 *      Sum = 3
 */

#include <stdio.h>

int main() {
    int a, b, carry;

    // Prompt the user
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    // Perform bitwise addition
    while (b != 0) {
        // carry contains common set bits of a and b
        carry = a & b;

        // sum of bits of a and b where at least one is not set
        a = a ^ b;

        // carry is shifted by one so that adding it to a gives the required sum
        b = carry << 1;
    }

    // Print the final result
    printf("Sum = %d\n", a);

    return 0;
}
