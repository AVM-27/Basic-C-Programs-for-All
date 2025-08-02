/*
 * Filename    : Strings/CharCountEncoding.c
 * Description : This program encodes a string by compressing consecutive repeating characters.
 *               It replaces sequences like "aaabb" with "a3b2".
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - The user enters a string of characters (e.g., "aabbccc").
 *  - The program compresses it by replacing consecutive repeated characters with the character followed by the count.
 *    For example: "aaabbc" → "a3b2c1"
 *  - It prints the compressed version.
 *
 * Input:
 *  - A string (max 99 characters, no spaces).
 *
 * Output:
 *  - A compressed version of the string.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:
 *      Enter input string: aaabbcc
 *    Output:
 *      Converted string: a3b2c2
 *
 *  Example 2:
 *    Input:
 *      Enter input string: abc
 *    Output:
 *      Converted string: a1b1c1
 */

#include <stdio.h>
#include <string.h>

int main() {
    char input[100];         // Array to store input string
    char output[200];        // Array to store the compressed output (larger size to handle counts)
    int outputIndex = 0;     // Index for output array
    int i = 0;

    // Prompt user for input
    printf("Enter input string: ");
    scanf("%s", input);  // Assumes input is a single word (no spaces)

    while (input[i] != '\0') {
        char currentChar = input[i];  // Get the current character
        int count = 0;

        // Count how many times currentChar is repeated consecutively
        while (input[i] == currentChar) {
            count++;
            i++;
        }

        // Add the character and its count to the output string
        output[outputIndex++] = currentChar;

        // Convert count to string using sprintf and append it
        char countStr[10];
        sprintf(countStr, "%d", count);  // Convert integer count to string

        for (int j = 0; countStr[j] != '\0'; j++) {
            output[outputIndex++] = countStr[j];
        }
    }

    output[outputIndex] = '\0';  // Null-terminate the output string

    // Print the result
    printf("Converted string: %s\n", output);

    return
