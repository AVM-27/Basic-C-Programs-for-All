/*
 * Filename    : Strings/StringReversal.c
 * Description : Reverses a string entered by the user and prints the reversed result.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - Accepts a string input (no spaces).
 *  - Reverses the string using array indexing.
 *  - Prints the reversed string character by character.
 *
 * Input:
 *  - A single word (string without spaces).
 *
 * Output:
 *  - The reversed string printed to the screen.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input : adarsh
 *    Output: hsrada
 *
 *  Example 2:
 *    Input : level
 *    Output: level
 */

#include <stdio.h>
#include <string.h>

int main() {
    char original[100], reversed[100];
    int i, j, length;

    // Prompt the user for input
    printf("Enter your string: ");
    scanf("%s", original);  // Reads a string without spaces

    length = strlen(original);  // Get the length of the input string

    // Reverse the string
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = original[i];
    }
    reversed[j] = '\0';  // Null-terminate the reversed string

    // Print the reversed string
    printf("Reversed string: %s\n", reversed);

    return 0;
}
