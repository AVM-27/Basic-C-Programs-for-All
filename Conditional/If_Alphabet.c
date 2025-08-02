/*
 * File: alphabet_digit.c
 * ----------------------
 * Correction: Added a check for uppercase letters, which was missing. The original
 * code had a typo `input<+ 'Z'`, which is corrected to `<= 'Z'`.
 */
#include <stdio.h> // Include standard I/O library.

int main() {
    // Declare a character variable to store user input.
    char input;

    // Prompt the user and read a single character.
    // The space in " %c" is crucial to consume any leftover whitespace (like Enter).
    printf("Enter a character: ");
    scanf(" %c", &input);

    // Check if the character is a digit (ASCII values '0' through '9').
    if (input >= '0' && input <= '9') {
        printf("The character '%c' is a Digit.\n", input);
    }
    // Else, check if it's a lowercase or uppercase letter.
    else if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
        printf("The character '%c' is an Alphabet.\n", input);
    }
    // If it's neither, it's a special character.
    else {
        printf("The character '%c' is a special character.\n", input);
    }

    return 0; // Indicate successful execution.
}
