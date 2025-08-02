/*
 * Filename    : Recursion/count_lowercase_recursive_v2.c
 * Description : Recursively counts the number of lowercase letters in a string.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Accepts a string from the user.
 *  - Recursively checks each character starting from index 0.
 *  - Increments count if the character is a lowercase letter (between 'a' and 'z').
 *  - Prints the total count of lowercase letters.
 *
 * Sample Input:
 * Enter a string: The Quick Brown Fox jumps over the Lazy Dog
 *
 * Sample Output:
 * Number of lowercase letters: 31
 */

#include <stdio.h>

// Function prototype
int countLowercase(char str[], int index);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Safe input for strings

    int count = countLowercase(str, 0);

    printf("Number of lowercase letters: %d\n", count);

    return 0;
}

// Recursive function to count lowercase characters
int countLowercase(char str[], int index) {
    if (str[index] == '\0') {
        return 0;  // Base case
    }

    int count = countLowercase(str, index + 1);  // Recursive call

    if (str[index] >= 'a' && str[index] <= 'z') {
        count++;  // Count if lowercase
    }

    return count;
}
