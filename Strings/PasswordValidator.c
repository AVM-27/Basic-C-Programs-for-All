/*
 * Filename    : Strings/PasswordValidator.c
 * Description : Validates a password based on certain rules: length and character variety.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - Accepts a password input from the user (no spaces).
 *  - Checks if the password meets the following criteria:
 *      - Length between 6 and 12 characters.
 *      - Contains at least one lowercase letter.
 *      - Contains at least one uppercase letter.
 *      - Contains at least one digit.
 *      - Contains at least one special character from: $, #, @
 *
 * Input:
 *  - A single password string.
 *
 * Output:
 *  - Prints 1 if password is valid.
 *  - Prints 0 if password is invalid.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:  Adarsh#2025
 *    Output: 1
 *
 *  Example 2:
 *    Input:  adarsh2025
 *    Output: 0
 */

#include <stdio.h>
#include <string.h>

int main() {
    char password[100], key;
    int i, lower = 0, upper = 0, digit = 0, special = 0, length;

    // Prompt user for password input
    printf("Enter your password: ");
    scanf("%s", password);

    length = strlen(password);

    // Check if password length is between 6 and 12
    if (length >= 6 && length <= 12) {
        for (i = 0; i < length; i++) {
            key = password[i];

            // Check for special characters
            if (key == '$' || key == '#' || key == '@') {
                special++;
            }

            // Check for digits
            if (key >= '0' && key <= '9') {
                digit++;
            }

            // Check for uppercase letters
            if (key >= 'A' && key <= 'Z') {
                upper++;
            }

            // Check for lowercase letters
            if (key >= 'a' && key <= 'z') {
                lower++;
            }
        }
    }

    // Final validation: all conditions must be met
    if (digit != 0 && upper != 0 && lower != 0 && special != 0 && (length >= 6 && length <= 12)) {
        printf("1\n");  // Valid password
    } else {
        printf("0\n");  // Invalid password
    }

    return 0;
}
