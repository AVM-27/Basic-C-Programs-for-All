/*
 * Filename    : Strings/ConcatenateWithStrncat.c
 * Description : Concatenates two strings using the strncat() function.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Accepts two strings from the user.
 *  - Finds the length of the longer string.
 *  - Concatenates the second string to the first using strncat(), limited by the longer string length.
 *
 * Input:
 *  - Two strings (without spaces).
 *
 * Output:
 *  - The combined string after strncat() operation.
 *
 * Important Notes for Students:
 *  - `strncat(destination, source, n)` appends at most `n` characters from source to destination.
 *  - Destination string must be large enough to hold the final result.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input :
 *      Enter your first string
 *      code
 *      Enter your second string
 *      base
 *    Output:
 *      The concatenated string is codebase
 *
 *  Example 2:
 *    Input :
 *      Enter your first string
 *      learn
 *      Enter your second string
 *      C
 *    Output:
 *      The concatenated string is learnC
 */

#include <stdio.h>
#include <string.h>  // For strlen and strncat

int main() {
    char str1[200], str2[100];
    int t;

    // Input from user
    printf("Enter your first string: ");
    scanf("%s", str1);

    printf("Enter your second string: ");
    scanf("%s", str2);

    // Determine the maximum number of characters to append
    t = (strlen(str1) >= strlen(str2)) ? strlen(str1) : strlen(str2);

    // Concatenate using strncat()
    strncat(str1, str2, t);

    // Output the result
    printf("The concatenated string is %s\n", str1);

    return 0;
}
