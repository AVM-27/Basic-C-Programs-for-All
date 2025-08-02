/*
 * Filename    : Loops/pattern1.c
 * Description : Prints a pyramid pattern of asterisks (*).
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads an integer input for the number of rows.
 *  - Prints a pyramid pattern with the specified number of rows.
 *  - Each row contains spaces followed by an increasing number of asterisks.
 *
 * Input:
 *  - Number of rows (integer).
 *
 * Output:
 *  - Pyramid pattern of asterisks (*).
 *
 * Sample Input/Output:
 *  Enter the number of rows you want
 *  5
 *      *
 *     ***
 *    *****
 *   *******
 *  *********
 */

#include <stdio.h>

int main()
{
    int num1, i, j;

    printf("Enter the number of rows you want\n");
    scanf("%d", &num1);

    // Loop through each row
    for (i = 1; i <= num1; i++)
    {
        // Print leading spaces to shape the pyramid
        for (j = 1; j <= num1 - i; j++)
        {
            printf(" ");
        }

        // Print the stars for the current row
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
