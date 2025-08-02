/*
 * Filename    : Basics/sum_of_digits.c
 * Description : Calculates the sum of digits of a given integer.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads an integer input from the user.
 *  - Extracts each digit by repeatedly taking the remainder by 10.
 *  - Sums up all digits and outputs the total.
 *
 * Input:
 *  - A positive integer.
 *
 * Output:
 *  - Sum of the digits of the input number.
 *
 * Sample Input/Output:
 *  Enter the number
 *  1234
 *  The sum of the digits is 10
 */

#include <stdio.h>

int main()
{
    int num1, temp, sum = 0;

    printf("Enter the number\n");
    scanf("%d", &num1);

    // Ensure num1 is positive for digit extraction
    if (num1 < 0) {
        num1 = -num1;
    }

    // Extract digits and add to sum
    while (num1 > 0)
    {
        temp = num1 % 10;  // Extract last digit
        sum = sum + temp;  // Add digit to sum
        num1 = num1 / 10;  // Remove last digit
    }

    printf("The sum of the digits is %d\n", sum);

    return 0;
}
