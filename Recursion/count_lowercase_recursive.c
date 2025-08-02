/*
 * Filename    : Recursion/count_lowercase_recursive.c
 * Description : Recursively counts the number of lowercase letters in a given string.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 * - Takes a string as input
 * - Recursively traverses each character
 * - Increments count if character is a lowercase letter (between 'a' and 'z')
 *
 * Sample Input:
 * Hello There, General Kenobi!
 *
 * Sample Output:
 * 20
 */

#include <stdio.h>
#include <string.h>

// Function prototype
int Lowercase(char str[], int index);

int main() {
    char str[100];
    int count;

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);  // safer alternative to gets()

    count = Lowercase(str, 0);

    printf("Number of lowercase letters: %d\n", count);

    return 0;
}

// Recursive function to count lowercase letters
int Lowercase(char str[], int index) {
    if (str[index] == '\0') {
        return 0;
    }

    int count = Lowercase(str, index + 1);

    if (str[index] >= 'a' && str[index] <= 'z') {
        count++;
    }

    return count;
}
