/*
 * Filename    : Strings/palindromestring.c
 * Description : Checks whether a given string is a palindrome.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Reads a string input from the user.
 *  - Compares characters from start and end moving towards the center.
 *  - Prints whether the string is a palindrome or not.
 *
 * Sample Input:
 * madam
 *
 * Sample Output:
 * It is a palindrome.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i, isPalindrome = 1;  // Flag set to true initially

    printf("Enter your string:\n");
    // Use fgets instead of gets for safety
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove newline character if present
    length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Check palindrome by comparing characters from both ends
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("It is a palindrome.\n");
    } else {
        printf("It is not a palindrome.\n");
    }

    return 0;
}
