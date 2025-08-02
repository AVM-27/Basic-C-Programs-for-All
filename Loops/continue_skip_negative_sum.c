/*
 * Filename    : Loops/continue_skip_negative_sum.c
 * Description : Reads 10 numbers from the user, skips negative numbers,
 *               and calculates the sum of non-negative numbers entered.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Details:
 *  - Prompts the user to input 10 numbers.
 *  - Uses a for loop to process each input.
 *  - If a negative number is entered, it is skipped (not counted or summed).
 *  - Sums only the non-negative numbers.
 *  - Displays how many numbers were summed and their total sum.
 *
 * Input:
 *  - 10 float numbers (can be positive, zero, or negative).
 *
 * Output:
 *  - Number of non-negative numbers summed.
 *  - Sum of those numbers.
 *
 * Sample Input:
 *  Enter number 1: 5
 *  Enter number 2: -3  (skipped)
 *  Enter number 3: 4
 *  ...
 *
 * Sample Output:
 *  The sum of 9 numbers is 45.0
 */

#include <stdio.h>

int main()
{
    int counter, numcount = 0;
    float number, sum = 0.0f;

    printf("Enter 10 numbers to calculate their sum.\n");
    printf("If you enter a negative number, it will be skipped.\n");

    for (counter = 1; counter <= 10; ++counter)
    {
        printf("Enter the number %d:\n", counter);
        scanf("%f", &number);

        if (number < 0.0f)
        {
            // Skip negative numbers
            continue;
        }

        numcount++;      // Count valid (non-negative) numbers
        sum += number;   // Add to sum
    }

    printf("The sum of %d numbers is %.2f\n", numcount, sum);

    return 0;
}
