/*
 * Filename    : Strings/ConvertToLowercase.c
 * Description : This program converts a string to lowercase using `tolower()` from <ctype.h>.
 *               It demonstrates basic string traversal and character case manipulation.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - The user enters a single word (no spaces).
 *  - The program prints the same string, converted to all lowercase characters.
 *  - Uses `tolower()` to convert each character.
 *
 * Input:
 *  - A string (max 99 characters, without spaces).
 *
 * Output:
 *  - The same string in lowercase.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:
 *      Enter your string:
 *      HELLO
 *    Output:
 *      hello
 *
 *  Example 2:
 *    Input:
 *      Enter your string:
 *      AdArSh
 *    Output:
 *      adarsh
 */

#include <stdio.h>
#include <ctype.h>   // For tolower()
#include <string.h>  // For strlen()

int main()
{
    char input[100];  // Array to hold the input string
    int i = 0;

    // Prompt the user
    printf("Enter your string:\n");
    scanf("%s", input);  // Reads a single word (no spaces)

    printf("Lowercase string:\n");

    // Convert and print each character in lowercase
    while (input[i])
    {
        putchar(tolower(input[i]));
        i++;
    }

    printf("\n");
    return 0;
}
