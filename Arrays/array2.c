/*
 * Filename    : Arrays/array2.c
 * Description : Reads an integer array from the user and computes the sum of its elements.
 *               Demonstrates array handling, user input, input validation, and simple arithmetic operations in C.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Details:
 *  - Prompts the user to enter the size of the integer array (must be between 1 and 100).
 *  - Validates that the size input is within allowed range; otherwise, prints an error and exits.
 *  - Accepts exactly n integers from the user, storing them in an array.
 *  - Iterates through the array to calculate the sum of all entered integers.
 *  - Displays the final sum.
 *
 * Input:
 *  - An integer n (1 <= n <= 100) indicating the size of the array.
 *  - n integers entered one by one.
 *
 * Output:
 *  - Sum of all n array elements.
 *  - Error message if invalid array size is provided.
 *
 * Example:
 *  Enter the size of your integer sum array (max 100):
 *  5
 *  Enter the element 0:
 *  10
 *  Enter the element 1:
 *  20
 *  Enter the element 2:
 *  5
 *  Enter the element 3:
 *  15
 *  Enter the element 4:
 *  25
 *  The sum of the integer array is 75
 */

#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;
    int sumarray[100];  // max array size 100

    // Prompt user to enter size of the array
    printf("Enter the size of your integer sum array (max 100):\n");
    scanf("%d", &n);

    // Input validation for array size
    if (n < 1 || n > 100) {
        printf("Error: Array size must be between 1 and 100.\n");
        return 1;  // Exit with error code
    }

    // Read elements into the array
    for (i = 0; i < n; i++) {
        printf("Enter the element %d:\n", i);
        scanf("%d", &sumarray[i]);
    }

    // Calculate the sum of the array elements
    for (i = 0; i < n; i++) {
        sum += sumarray[i];
    }

    // Print the result
    printf("The sum of the integer array is %d\n", sum);

    return 0;
}
