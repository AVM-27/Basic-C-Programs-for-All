/*
 * Filename    : Recursion/decimal_to_binary_recursive.c
 * Description : Converts a decimal number to its binary representation using recursion.
 *               This demonstrates how numbers can be recursively broken down and printed in base-2.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * Enter a decimal number
 * 13
 * The Binary representation of the number is
 * 1101
 */

#include <stdio.h>

// Recursive function to print binary representation
void Binary(int decimal) {
    if (decimal == 0) {
        return;  // Base case: stop when number is 0
    }

    Binary(decimal / 2);           // Recursive call on quotient
    printf("%d", decimal % 2);     // Print remainder (binary digit)
}

int main() {
    int decimal;

    printf("Enter a decimal number\n");
    scanf("%d", &decimal);

    printf("The Binary representation of the number is\n");

    // Edge case: if the input is 0, print 0 manually
    if (decimal == 0) {
        printf("0");
    } else {
        Binary(decimal);
    }

    printf("\n");
    return 0;
}
