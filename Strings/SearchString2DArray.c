/*
 * Filename    : Strings/SearchString2DArray.c
 * Description : Searches for a string in a 2D array of strings and reports if it is present.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Accepts 5 strings (each max length 9 characters) from the user.
 *  - Asks the user for a string to search for within these 5 strings.
 *  - Checks if the search string is present in the list.
 *  - Reports if the string was found and how many times.
 *
 * Important Notes for Students:
 *  - Uses a 2D char array to store multiple strings.
 *  - Uses strcmp() from string.h to compare strings.
 *  - String comparison returns 0 if strings are equal.
 *
 * Sample Input/Output:
 * Enter 5 strings
 * apple
 * banana
 * apple
 * mango
 * apple
 * Enter the string to be searched
 * apple
 * The string 'apple' is present 3 times.
 *
 * Example when string not found:
 * Enter 5 strings
 * cat
 * dog
 * fish
 * bird
 * cow
 * Enter the string to be searched
 * lion
 * The string 'lion' is not present in the list.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char names[5][10];    // Array to hold 5 strings of max length 9 + '\0'
    char searchString[10];
    int i, count = 0;

    printf("Enter 5 strings (each without spaces, max 9 chars):\n");
    for (i = 0; i < 5; i++) {
        scanf("%9s", names[i]);  // Read up to 9 chars to avoid buffer overflow
    }

    printf("Enter the string to be searched:\n");
    scanf("%9s", searchString);

    // Check how many times searchString appears in names
    for (i = 0; i < 5; i++) {
        if (strcmp(names[i], searchString) == 0) {
            count++;
        }
    }

    // Output results
    if (count > 0) {
        printf("The string '%s' is present %d %s.\n", searchString, count, count == 1 ? "time" : "times");
    } else {
        printf("The string '%s' is not present in the list.\n", searchString);
    }

    return 0;
}
