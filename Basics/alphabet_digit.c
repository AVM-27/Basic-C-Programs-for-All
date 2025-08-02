/*
 * Filename    : Basics/alphabet_digit.c
 * Description : Determines whether an input character is a digit or an alphabet character.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Reads a single character input from the user.
 *  - Checks if the character is a digit (0-9).
 *  - Checks if the character is an alphabet letter (a-z or A-Z).
 *  - Prints "Digit" if input is a digit.
 *  - Prints "Alphabet" if input is an alphabet letter.
 *  - Prints "Neither digit nor alphabet" if input is neither.
 *
 * Sample Input:
 * a
 *
 * Sample Output:
 * Alphabet
 */

#include <stdio.h>

int main() {
    char input;

    printf("Enter a character:\n");
    scanf("%c", &input);

    // Check if input is a digit between '0' and '9'
    if (input >= '0' && input <= '9') {
        printf("Digit\n");
    }
    // Check if input is an alphabet letter between 'a' to 'z' or 'A' to 'Z'
    else if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
        printf("Alphabet\n");
    }
    // Input is neither a digit nor an alphabet
    else {
        printf("Neither digit nor alphabet\n");
    }

    return 0;
}
