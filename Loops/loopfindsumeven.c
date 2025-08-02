/*
 * Filename    : Loops/loopfindsumeven.c
 * Description : Calculates and prints the sum of all even numbers from 1 to 50.
 * Author      : Adarsh Venugopal
 * Date        : 2025-08-02
 *
 * Program Details:
 *  - Iterates from 1 to 50.
 *  - Uses a loop to find even numbers.
 *  - Accumulates sum of even numbers.
 *  - Prints the final sum.
 *
 * Input:
 *  - None (fixed range 1 to 50).
 *
 * Output:
 *  - Sum of all even numbers between 1 and 50 inclusive.
 *
 * Sample Output:
 *  This program will print sum of all even numbers from 1 to 50
 *  The sum of all even numbers from 1 to 50 is 650
 */

#include <stdio.h>

int main()
{
    int counter, sum = 0;

    printf("This program will print sum of all even numbers from 1 to 50\n");

    for (counter = 1; counter <= 50; counter++)
    {
        if (counter % 2 != 0) {
            continue;  // Skip odd numbers
        }
        sum += counter;  // Add even number to sum
    }

    printf("The sum of all even numbers from 1 to 50 is %d\n", sum);

    return 0;
}
