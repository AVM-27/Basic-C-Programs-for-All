/*
 * Filename    : Recursion/count_lowercase_recursive.c
 * Description : Counts the number of lowercase letters in a string using recursion.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * Enter the string
 * Hello World!
 *
 * Sample Output:
 * No. of lowercase letters 8
 */

#include <stdio.h>
#include <string.h>

int Lowercase(char str[], int index);

int main() {
    char str[100];
    int count = 0;

    printf("Enter the string\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline

    count = Lowercase(str, 0);
    printf("No. of lowercase letters %d\n", count);

    return 0;
}

int Lowercase(char str[], int index) {
    if (str[index] == '\0') {
        return 0; // Base case: end of string
    }

    int count = Lowercase(str, index + 1);

    if (str[index] >= 'a' && str[index] <= 'z') {
        count++;
    }

    return count;
}
