/*
 * Filename    : Strings/concatenate.c
 * Description : Concatenates two strings without using built-in functions.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Reads two input strings (including spaces).
 *  - Manually concatenates the second string at the end of the first string.
 *  - Prints the concatenated result.
 *
 * Sample Input:
 * Enter the first string
 * Hello
 * Enter the second string
 * World
 *
 * Sample Output:
 * The concatenated string is
 *      HelloWorld
 */

#include <stdio.h>

int main()
{
    char s1[200], s2[100];  // s1 large enough to hold concatenated result
    int i, j;

    printf("Enter the first string\n");
    if (fgets(s1, sizeof(s1), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline from s1 if present
    for (i = 0; s1[i] != '\0'; ++i) {
        if (s1[i] == '\n') {
            s1[i] = '\0';
            break;
        }
    }

    printf("Enter the second string\n");
    if (fgets(s2, sizeof(s2), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline from s2 if present
    for (j = 0; s2[j] != '\0'; ++j) {
        if (s2[j] == '\n') {
            s2[j] = '\0';
            break;
        }
    }

    // Find the end of s1
    for (i = 0; s1[i] != '\0'; ++i);

    // Append s2 to s1
    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';  // Null-terminate the concatenated string

    printf("The concatenated string is\n\t%s\n", s1);

    return 0;
}
