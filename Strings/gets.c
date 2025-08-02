/*
 * Filename    : Strings/gets.c
 * Description : Demonstrates reading a string from user input using gets() (unsafe).
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads a string input from the user using gets().
 *  - Prints the entered string.
 *
 * Input:
 *  - User inputs their name (up to 29 characters).
 *
 * Output:
 *  - Prints the entered name.
 *
 * Important Notes:
 *  - `gets()` is unsafe and can cause buffer overflow because it does not check buffer size.
 *  - It is deprecated and should be replaced with `fgets()` for safer input handling.
 *
 * Sample Input/Output:
 *  Enter your name: 
 *  Alice
 *  Your name is: Alice
 */

#include <stdio.h>

int main() {
    char name[30];
    printf("Enter your name: \n");
    gets(name);  // Unsafe: can cause buffer overflow
    printf("Your name is: ");
    puts(name);

    return 0;
}
