/*
 * Filename    : Strings/stringlengthv1.c
 * Description : Calculates the length of a string entered by the user without using strlen().
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads a string input from the user (single word, no spaces).
 *  - Iterates through the string to count characters until null terminator.
 *  - Prints the length of the input string.
 *
 * Input:
 *  - A single word string entered by the user.
 *
 * Output:
 *  - Length of the input string printed to the console.
 *
 * Notes for Students:
 *  - scanf("%s", s) reads input until the first whitespace.
 *  - The for loop increments counter until it encounters '\0'.
 *  - Using char for the loop counter i can cause issues with very long strings; int is safer.
 *
 * Sample Input/Output:
 *  Enter your string
 *  hello
 *  Length of string hello is: 5
 */

#include <stdio.h>

int main() {
    char s[1000];
    int i;  // Use int for the index variable to avoid overflow for longer strings

    printf("Enter your string\n");
    scanf("%s", s);

    // Count characters until null terminator
    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of string %s is: %d\n", s, i);

    return 0;
}
