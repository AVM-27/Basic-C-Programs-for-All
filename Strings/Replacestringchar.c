/*
 * Filename    : Strings/Replacestringchar.c
 * Description : Replaces a character in a string at a specific position using an additional copy array.
 * Author      : Adarsh Venugopal
 *
 * This program takes a string input from the user, then asks the user for a position in the string
 * and a replacement character. It replaces the character at that position and displays the modified string.
 *
 * ---------------------------
 * Sample Input/Output:
 * ---------------------------
 * Enter your string:
 * hello
 * Enter the position of the character you want to replace (0-based index):
 * 1
 * Enter the element you want to replace with:
 * a
 * Output: hallo
 */

#include <stdio.h>
#include <string.h>

int main() {
    char name[100], copy[100], replace;
    int pos, i;

    printf("Enter your string:\n");
    scanf("%s", name);

    int length = strlen(name);

    printf("Enter the position of the character you want to replace (0-based index):\n");
    scanf("%d", &pos);

    if (pos < 0 || pos >= length) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element you want to replace with:\n");
    scanf(" %c", &replace);  // Note: space before %c to handle newline

    // Copy original string
    for (i = 0; i < length; i++) {
        copy[i] = name[i];
    }

    // Replace in original string
    name[pos] = replace;

    // Print the modified string
    for (i = 0; i <= pos; i++) {
        printf("%c", name[i]);
    }
    for (i = pos + 1; i < length; i++) {
        printf("%c", copy[i]);
    }

    printf("\n");
    return 0;
}
