/*
 * Filename    : Functions/NestedRatioDifference.c
 * Description : This program demonstrates the use of nested function calls in C by computing the ratio
 *               of one integer to the difference of two other integers. It safely handles the case where
 *               the difference is zero to avoid division by zero errors.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - The program reads three integers (x, y, and z) from the user.
 *  - It calculates the difference between y and z using a function called `difference`.
 *  - It then computes the ratio of x divided by that difference using another function called `ratio`.
 *  - The `ratio` function calls `difference` internally, demonstrating nested function calls.
 *  - Before performing the division, it checks if the denominator (difference) is zero.
 *    If it is zero, it prints an error message and avoids division.
 *
 * Input:
 *  - Three integers entered by the user separated by spaces or new lines.
 *
 * Output:
 *  - If the difference (y - z) is not zero, prints the computed ratio as a floating-point number.
 *  - If the difference is zero, prints an error message saying division by zero is not allowed.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:
 *      Enter three integers (x y z): 10 5 2
 *    Output:
 *      The ratio x / (y - z) is: 3.333333
 *
 *  Example 2:
 *    Input:
 *      Enter three integers (x y z): 10 5 5
 *    Output:
 *      Error: Division by zero is not allowed since (y - z) equals zero.
 */

#include <stdio.h>

// Function to calculate the difference between two integers
int difference(int a, int b)
{
    // Simply returns a - b
    return a - b;
}

// Function to calculate the ratio x / (y - z)
// This function calls the 'difference' function internally (nested call)
float ratio(int x, int y, int z)
{
    int diff = difference(y, z);  // Nested function call

    // Check if difference is zero to avoid division by zero
    if (diff == 0)
    {
        // Return a special value (e.g., 0.0) or handle error outside
        return 0.0f;
    }

    // Perform and return the ratio as a floating-point number
    return (float)x / diff;
}

int main()
{
    int x, y, z;
    float result;

    // Prompt the user to enter three integers
    printf("Enter three integers (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    // Call the ratio function, which internally calls difference
    result = ratio(x, y, z);

    // If the difference was zero, ratio returns 0.0 and we print an error
    if (difference(y, z) == 0)
    {
        printf("Error: Division by zero is not allowed since (y - z) equals zero.\n");
    }
    else
    {
        // Otherwise, print the computed ratio
        printf("The ratio x / (y - z) is: %f\n", result);
    }

    return 0;
}
