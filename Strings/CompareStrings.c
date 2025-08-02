/*
 * Filename    : Strings/CompareStrings.c
 * Description : Compares two strings up to the length of the longer one using strncmp().
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - Accepts two strings from the user.
 *  - Compares them using strncmp() for their maximum length.
 *  - Returns:
 *      - 0 if the strings are equal,
 *      - <0 if first string is less than second,
 *      - >0 if first string is greater than second.
 *
 * Input:
 *  - Two strings (no spaces).
 *
 * Output:
 *  - The result of comparison using strncmp().
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input :
 *      Enter your first string
 *      hello
 *      Enter your second string
 *      hello
 *    Output: 0
 *
 *  Example 2:
 *    Input :
 *      Enter your first string
 *      apple
 *      Enter your second string
 *      banana
 *    Output: -1 (or any negative number depending on system implementation)
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int maxLength, result;

    // Get input from user
    printf("Enter your first string: ");
    scanf("%s", str1);

    printf("Enter your second string: ");
    scanf("%s", str2);

    // Determine max length to compare
    maxLength = (strlen(str1) >= strlen(str2)) ? strlen(str1) : strlen(str2);

    // Compare the two strings using strncmp
    result = strncmp(str1, str2, maxLength);

    // Print result
    printf("Comparison result: %d\n", result);

    return 0;
}
