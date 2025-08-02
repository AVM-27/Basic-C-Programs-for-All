/*
 * Filename    : Strings/SortCharactersAlphabetically.c
 * Description : This program reads a string (without spaces) from the user,
 *               then sorts the characters of the string in alphabetical order.
 *               It uses a simple sorting algorithm to rearrange the characters.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - The user inputs a string with no spaces.
 *  - The program calculates the length of the string.
 *  - It compares every character with all characters after it.
 *  - If any character is "greater" (comes later alphabetically) than another,
 *    the characters are swapped to arrange in ascending order.
 *  - Finally, the sorted string is displayed.
 *
 * Input:
 *  - A string of characters without spaces, e.g., "adarsh"
 *
 * Output:
 *  - The string with characters sorted alphabetically, e.g., "aadhrs"
 *
 * Important Concepts for Students:
 *  - Strings in C are arrays of characters ending with a null character '\0'.
 *  - Sorting involves comparing elements and swapping if needed.
 *  - Nested loops are commonly used for simple sorting algorithms.
 *  - Always be careful with array bounds and null termination.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Enter your name WITHOUT SPACES
 *    adarsh
 *    Sorted string: aadhrs
 *
 *  Example 2:
 *    Enter your name WITHOUT SPACES
 *    code
 *    Sorted string: cdeo
 */

#include <stdio.h>

/*
 * Function: sortAlphabetically
 * ----------------------------
 * Sorts the characters of the input string in ascending alphabetical order.
 *
 * Parameters:
 *  name - the string whose characters will be sorted
 *
 * Returns:
 *  void (the input string is modified in place)
 */
void sortAlphabetically(char name[]);

int main() {
    // Declare an array to hold the user's input string (max length 19 + null)
    char name[20];

    // Prompt user for input clearly
    printf("Enter your name WITHOUT SPACES:\n");

    // Read the string input from the user
    // Note: Using just `name` as argument for scanf reads a string until whitespace
    scanf("%19s", name);  // limiting to 19 chars to prevent overflow

    // Call the function to sort the characters of the string alphabetically
    sortAlphabetically(name);

    // Print the sorted string with clear message
    printf("Sorted string: %s\n", name);

    return 0;
}

void sortAlphabetically(char name[]) {
    int i, j;
    char temp;

    // Calculate the length of the string manually
    int length = 0;
    while (name[length] != '\0') {
        length++;
    }

    /*
     * Sorting logic:
     * For each character, compare it with all characters that come after it.
     * If a character at position j is smaller (alphabetically) than at i,
     * swap them. This results in the string sorted in ascending order.
     */
    for (i = 0; i < length - 1; i++) {
        for (j = i + 1; j < length; j++) {
            if (name[j] < name[i]) {
                // Swap characters at positions i and j
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }
}
