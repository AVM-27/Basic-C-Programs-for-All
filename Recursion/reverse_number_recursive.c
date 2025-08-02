/*
 * Filename    : Recursion/reverse_number_recursive.c
 * Description : Reverses an integer using recursion.
 *               Demonstrates passing parameters recursively to accumulate the reversed value.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * Enter the number to be reversed
 * 12345
 * The reversed number is
 * 54321
 */

#include <stdio.h>

// Recursive function to reverse digits of a number
int reverse(int num, int rev) {
    if (num == 0) {
        return rev;
    }

    int digit = num % 10;
    rev = (rev * 10) + digit;

    return reverse(num / 10, rev);  // Recursive call with reduced number
}

int main() {
    int num;
    printf("Enter the number to be reversed\n");
    scanf("%d", &num);

    int rev = reverse(num, 0);  // Start with rev = 0

    printf("The reversed number is\n%d\n", rev);

    return 0;
}
