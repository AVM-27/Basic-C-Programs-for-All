/*
 * Filename    : Strings/stringlengthv2.c
 * Description : Measures lengths of different strings using strlen().
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Demonstrates different ways to declare strings.
 *  - Reads a user input string safely using fgets().
 *  - Displays the lengths of all strings using strlen().
 *
 * Input:
 *  - User inputs a string (up to 19 characters).
 *
 * Output:
 *  - Lengths of three strings printed to the console.
 *
 * Notes for Students:
 *  - Avoid unsafe functions like gets(); use fgets() instead.
 *  - fgets() includes the newline character, which needs trimming.
 *  - strlen() returns the length of the string excluding the null terminator.
 *
 * Sample Input/Output:
 *  Enter your string (max 19 characters):
 *  HelloWorld
 *  Length of string a = 7
 *  Length of string b = 7
 *  Length of string c = 10
 */

#include <stdio.h>
#include <string.h>

int main() {
    // String initialized as literal (null-terminated)
    char a[20] = "Program";

    // String initialized as char array with explicit characters and null terminator
    char b[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};

    // Buffer to store user input string
    char c[20];

    printf("Enter your string (max 19 characters):\n");
    // Read input safely; fgets reads newline, so remove it if present
    if (fgets(c, sizeof(c), stdin)) {
        size_t len = strlen(c);
        if (len > 0 && c[len - 1] == '\n') {
            c[len - 1] = '\0';  // Remove trailing newline
        }
    }

    // Print lengths of the strings
    printf("Length of string a = %zu\n", strlen(a));
    printf("Length of string b = %zu\n", strlen(b));
    printf("Length of string c = %zu\n", strlen(c));

    return 0;
}
