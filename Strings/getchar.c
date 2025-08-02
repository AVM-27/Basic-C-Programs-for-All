/*
 * Filename    : Strings/getchar.c
 * Description : Reads a string input character-by-character using getchar().
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads characters from input until newline is encountered.
 *  - Stores characters in an array to form a string.
 *  - Prints the entered string.
 *
 * Input:
 *  - User inputs their name (terminated by Enter key).
 *
 * Output:
 *  - Prints the entered name.
 *
 * Notes:
 *  - Uses getchar() to read one character at a time.
 *  - Stops reading input on newline character.
 *  - Ensures string is null-terminated.
 *  - Handles buffer size by limiting input length to avoid overflow.
 *
 * Sample Input/Output:
 *  Enter your name:
 *  Alice
 *  Your Name is Alice.
 */

#include <stdio.h>

int main()
{
    char name[30];
    char ch;
    int i = 0;

    printf("Enter your name: \n");

    // Read characters until newline or buffer limit reached
    while (i < sizeof(name) - 1 && (ch = getchar()) != '\n' && ch != EOF)
    {
        name[i] = ch;
        i++;
    }
    name[i] = '\0'; // Null terminate the string

    printf("Your Name is %s.\n", name);

    return 0;
}
