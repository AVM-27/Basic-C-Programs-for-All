/*
 * Filename    : Strings/ReadStringWithGetchar.c
 * Description : This program reads a string from the user character-by-character using `getchar()` until a newline (`\n`) is entered.
 *               It demonstrates low-level character input and manual string building in C.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - The program reads characters one by one using `getchar()` until the user presses Enter.
 *  - Each character is stored in an array (`name[]`) to build a string.
 *  - After the loop, the string is terminated with a null character `\0`.
 *  - Finally, it prints the entered name using `puts()`.
 *
 * Input:
 *  - A name or word entered by the user (up to 29 characters).
 *
 * Output:
 *  - The same name printed back to the screen.
 *
 * Sample Input/Output:
 *  Example:
 *    Input:
 *      Enter name: Adarsh
 *    Output:
 *      Adarsh
 *
 * Notes:
 *  - This code is a manual alternative to using `fgets()` or `scanf("%s", ...)`.
 *  - It helps beginners understand how C handles character arrays and input.
 */

#include <stdio.h>

int main()
{
    char name[30];  // Character array to store the name
    char ch;        // Variable to hold each character from input
    int i = 0;

    // Prompt the user to enter a name
    printf("Enter name: ");

    // Read characters until newline is encountered
    while ((ch = getchar()) != '\n' && i < 29)  // 29 to leave space for '\0'
    {
        name[i] = ch;  // Store character in array
        i++;
    }

    name[i] = '\0';  // Add string terminator at the end

    // Print the name using puts
    printf("You entered: ");
    puts(name);

    return 0;
}
