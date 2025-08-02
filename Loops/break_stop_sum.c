/*
 * Filename    : Loops/break_stop_sum.c
 * Description : Reads up to 10 numbers from the user and calculates their sum.
 *               If a negative number is entered, the summation stops immediately.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Details:
 *  - Prompts the user to enter up to 10 floating-point numbers.
 *  - Uses a for loop to read each number.
 *  - If a negative number is entered, the loop breaks and stops input.
 *  - Sums all numbers entered before the negative number.
 *  - Prints the sum along with how many numbers were summed.
 *
 * Input:
 *  - Up to 10 float numbers.
 *
 * Output:
 *  - Number of valid numbers summed.
 *  - Sum of those numbers.
 *
 * Sample Input:
 *  Enter number 1: 5
 *  Enter number 2: 3.2
 *  Enter number 3: -1  (stops here)
 *
 * Sample Output:
 *  Sum of 3 numbers = 8.2
 */

#include <stdio.h>

int main()
{
    int counter;
    float number, sum = 0.0f;

    printf("Enter 10 numbers to calculate their sum.\n");
    printf("If you enter a negative number, summation will stop.\n");

    for (counter = 1; counter <= 10; ++counter)
    {
        printf("Enter the number %d:\n", counter);
        scanf("%f", &number);

        if (number < 0.0f)
        {
            break;
        }
        sum += number;
    }

    printf("Sum of %d numbers = %.2f\n", counter, sum);

    return 0;
}
