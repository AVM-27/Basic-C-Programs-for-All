/*
 * Filename    : Bitwise/bitwise_and_shifts.c
 * Description : Demonstrates the use of bitwise operators in C including AND, OR, XOR,
 *               complement, left shift, and right shift operations.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Details:
 *  - Initializes two integers a and b.
 *  - Performs bitwise AND, OR, XOR operations.
 *  - Performs bitwise complement on b.
 *  - Demonstrates left shift on a and right shift on b.
 *  - Prints results of all operations.
 *
 * Output:
 *  - The program outputs the result of each bitwise operation on the console.
 *
 * Example Output:
 *  2 & 3 = 2
 *  2 | 3 = 3
 *  2 ^ 3 = 1
 *  ~3    = -4
 *  2 << 3 = 16
 *  3 >> 2 = 0
 */

#include <stdio.h>

int main()
{
    int a = 2, b = 3;

    printf("%d & %d = %d\n", a, b, a & b);    // Bitwise AND
    printf("%d | %d = %d\n", a, b, a | b);    // Bitwise OR
    printf("%d ^ %d = %d\n", a, b, a ^ b);    // Bitwise XOR
    printf("~%d    = %d\n", b, ~b);           // Bitwise Complement
    printf("%d << 3 = %d\n", a, a << 3);      // Left Shift a by 3 bits
    printf("%d >> 2 = %d\n", b, b >> 2);      // Right Shift b by 2 bits

    return 0;
}
