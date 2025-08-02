/*
 * Filename    : Strings/tolower.c
 * Description : Converts all characters of a string to lowercase using tolower() from <ctype.h>.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Demonstrates the use of the `tolower()` function to convert uppercase letters in a string to lowercase.
 *  - Processes a fixed string "C PROGRAM".
 *  - Prints the converted lowercase string character by character.
 *
 * Input:
 *  - No user input; the string is hardcoded.
 *
 * Output:
 *  - The string "c program" printed in lowercase.
 *
 * Notes for Students:
 *  - `tolower(int c)` converts an uppercase letter to lowercase if applicable.
 *  - Non-alphabetical characters remain unchanged.
 *  - This program prints characters one by one using `putchar()`.
 *  - Useful to understand character manipulation using standard library functions.
 *
 * Sample Output:
 *  c program
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    int i = 0;
    char str[] = "C PROGRAM";

    // Loop through each character until null terminator
    while (str[i]) {
        // Convert current character to lowercase and print it
        putchar(tolower(str[i]));
        i++;
    }

    // Print a newline after the converted string for neatness
    putchar('\n');

    return 0;
}
