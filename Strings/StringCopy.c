/*
 * Filename    : Strings/StringCopy.c
 * Description : Demonstrates string copying using the strcpy() function.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - This program reads a string (such as a name) from the user.
 *  - It then copies that string into another variable using the built-in `strcpy()` function.
 *  - Finally, it displays the copied string.
 *
 * Input:
 *  - A single word string (no spaces).
 *
 * Output:
 *  - The copied version of the input string.
 *
 * Notes for Students:
 *  - `strcpy(destination, source)` copies characters from the source string to the destination.
 *  - Make sure the destination array is large enough to hold the source string including the null character.
 *  - This example uses fixed-size arrays for simplicity.
 *
 * Sample Input/Output:
 *  Example:
 *    Enter your name
 *    Alice
 *    Copied string is: Alice
 */

#include <stdio.h>
#include <string.h>  // Correct header for strcpy

int main() {
    char original[100], copied[100];

    // Prompt the user
    printf("Enter your name:\n");
    scanf("%s", original);

    // Copy the string
    strcpy(copied, original);

    // Display the copied result
    printf("Copied string is: %s\n", copied);

    return 0;
}
