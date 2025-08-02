/*
 * Filename    : Loops/pattern3.c
 * Description : Prints a pyramid pattern of increasing alphabets.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads the number of rows (num1).
 *  - Prints a pyramid where each row contains repeated characters.
 *  - Characters start from 'a' and increment by one with each row.
 *
 * Input:
 *  - Number of rows (integer).
 *
 * Output:
 *  - Pyramid pattern of alphabets.
 *
 * Sample Input/Output:
 *  Enter the number of rows you want
 *  4
 *     a
 *    bbb
 *   ccccc
 *  ddddddd
 */

#include <stdio.h>

int main()
{
    int a = 97; // ASCII code for 'a'
    int num1, i, j;

    printf("Enter the number of rows you want\n");
    scanf("%d", &num1);

    for (i = 1; i <= num1; i++)
    {
        // Print spaces for pyramid shape
        for (j = 1; j <= num1 - i; j++)
        {
            printf(" ");
        }

        // Print characters for the pyramid row
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("%c", a);
        }

        printf("\n");
        a++;  // Increment character for next row
    }

    return 0;
}
