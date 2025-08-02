/*
 * Filename    : Strings/freqstring.c
 * Description : Reads a string and a character from the user,
 *               then finds and prints how many times the character occurs in the string.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Prompts user to input a string (supports spaces).
 *  - Prompts user to input a single character.
 *  - Iterates over the string, counting occurrences of the input character.
 *  - Displays the total count of occurrences.
 *
 * Sample Input:
 * Enter your string:
 * hello world
 * Enter the character whose frequency you want to find:
 * l
 *
 * Sample Output:
 * l is present 3 times
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];   // Array to store the input string, max length 999 + 1 null terminator
    char ch;          // Character whose frequency to find
    int freq = 0;     // Frequency counter
    int i;            // Loop index

    // Prompt user for string input
    printf("Enter your string:\n");
    
    // fgets is used instead of gets for safety against buffer overflow
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input string.\n");
        return 1;
    }

    // Remove trailing newline character if present
    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    // Prompt user for the character input whose frequency is to be found
    printf("Enter the character whose frequency you want to find:\n");
    
    // The leading space in format string ensures any leftover whitespace/newline is consumed before reading character
    if (scanf(" %c", &ch) != 1) {
        printf("Error reading character.\n");
        return 1;
    }

    // Iterate over the string and count occurrences of ch
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            freq++;
        }
    }

    // Output the result
    printf("%c is present %d %s\n", ch, freq, (freq == 1) ? "time" : "times");

    return 0;
}
