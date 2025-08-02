/*
 * Filename    : Basics/BinaryToDecimal.c
 * Description : Converts a binary number (entered as an integer) to its decimal equivalent.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - This program accepts a binary number (e.g., 1011) as input from the user.
 *  - It processes each digit from right to left, multiplying it with powers of 2 (i.e., base).
 *  - The result is the equivalent decimal number.
 *
 * Input:
 *  - An integer containing only 0s and 1s (e.g., 1010).
 *
 * Output:
 *  - The equivalent decimal number.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:
 *      Enter a binary number: 1101
 *    Output:
 *      Decimal number is: 13
 *
 *  Example 2:
 *    Input:
 *      Enter a binary number: 10010
 *    Output:
 *      Decimal number is: 18
 */

#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1;

    // Prompt user to enter a binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Loop to convert binary to decimal
    while (binary > 0) {
        int digit = binary % 10;     // Get the last digit (rightmost)
        decimal += digit * base;     // Add the value of that digit * current base
        binary /= 10;                // Remove the last digit from binary
        base *= 2;                   // Move to next power of 2
    }

    // Output the result
    printf("Decimal number is: %d\n", decimal);

    return 0;
}
