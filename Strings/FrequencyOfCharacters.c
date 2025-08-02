/*
 * Filename    : Strings/FrequencyOfCharacters.c
 * Description : This program counts the frequency of lowercase English letters in a given string.
 *               It demonstrates character array traversal, ASCII indexing, and frequency counting using arrays.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - The user inputs a string containing lowercase English letters only.
 *  - A frequency array `freq[26]` is used to keep track of how many times each letter appears.
 *  - Each letter maps to an index: 'a' = 0, 'b' = 1, ..., 'z' = 25.
 *  - After scanning the string, the program prints the frequency of each character that appears.
 *
 * Input:
 *  - A string (up to 1000 characters) of lowercase English letters.
 *
 * Output:
 *  - The frequency count of each character that appears in the string.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:
 *      Enter a string of lowercase English letters:
 *      banana
 *    Output:
 *      The frequency of characters is -
 *          a = 3
 *          b = 1
 *          n = 2
 *
 *  Example 2:
 *    Input:
 *      Enter a string of lowercase English letters:
 *      hello
 *    Output:
 *      The frequency of characters is -
 *          e = 1
 *          h = 1
 *          l = 2
 *          o = 1
 */

#include <stdio.h>

int main() {
    // Declare a string of size 1000
    char str[1000];
    int i;

    // Prompt the user to enter the input string
    printf("Enter a string of lowercase English letters: ");
    fgets(str, sizeof(str), stdin);  // Safe string input

    // Step 1: Initialize the frequency array
    int freq[26] = {0};  // Each index represents a letter from 'a' to 'z'

    // Step 2: Traverse the input string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if the character is a lowercase letter
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;  // Increment the count at the correct index
        }
    }

    // Step 3: Display the frequency results
    printf("The frequency of characters is -\n");
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            char character = 'a' + i;  // Convert index back to character
            printf("\t%c = %d\n", character, freq[i]);
        }
    }

    return 0;
}
