/*
 * Filename    : Strings/PrintSeriesUnrepeated.c
 * Description : This program reads a string and prints only the first occurrence of each series of repeated characters.
 *               It removes consecutive duplicates while preserving the first occurrence of each character group.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - The user enters a string.
 *  - The program traverses the string.
 *  - It compares each character with the next.
 *  - If multiple characters are the same consecutively (e.g., 'aaa'), only the first is printed.
 *
 * Input:
 *  - A string (up to 100 characters, including spaces if needed).
 *
 * Output:
 *  - A new string with only the first character of each repeated group.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:
 *      Enter your string:
 *      aaabbccdee
 *    Output:
 *      abcde
 *
 *  Example 2:
 *    Input:
 *      Enter your string:
 *      aabbbaaacc
 *    Output:
 *      abac
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    int i = 0, length;

    // Prompt the user to enter a string
    printf("Enter your string:\n");
    fgets(input, sizeof(input), stdin);  // Safe input method

    // Remove newline character if present
    length = strlen(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length--;
    }

    printf("Output without consecutive duplicates:\n");

    // Traverse the string and print only the first character of each repeated group
    while (i < length)
    {
        // Print current character
        printf("%c", input[i]);

        // Skip all consecutive duplicates
        while (input[i] == input[i + 1])
        {
            i++;
        }

        i++;  // Move to the next character group
    }

    printf("\n");

    return 0;
}
