/*
 * Filename    : Strings/ConvertToUppercase.c
 * Description : This program converts a string to uppercase using `toupper()` from <ctype.h>.
 *               It demonstrates character manipulation and basic string traversal.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - The user inputs a word (without spaces).
 *  - Each character is converted to its uppercase form.
 *  - The program prints the resulting uppercase string.
 *
 * Input:
 *  - A string (max 99 characters, without spaces).
 *
 * Output:
 *  - The same string in uppercase.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:
 *      Enter your string:
 *      hello
 *    Output:
 *      HELLO
 *
 *  Example 2:
 *    Input:
 *      Enter your string:
 *      AdArSh
 *    Output:
 *      ADARSH
 */

#include <stdio.h>
#include <ctype.h>   // For toupper()

int main()
{
    char input[100];  // Array to hold input string
    int i = 0;

    // Prompt user for input
    printf("Enter your string:\n");
    scanf("%s", input);  // Reads a word (no spaces)

    printf("Uppercase string:\n");

    // Loop to convert and print each character as uppercase
    while (input[i])
    {
        putchar(toupper(input[i]));
        i++;
    }

    printf("\n");  // Clean newline after output

    return 0;
}
