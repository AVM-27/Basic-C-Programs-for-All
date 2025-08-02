/*
 * Filename    : Strings/ReverseAndPalindromeCheck.c
 * Description : This program reads a string, reverses it, and checks whether the string is a palindrome.
 *               A palindrome is a string that reads the same forward and backward (e.g., "madam", "racecar").
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - The user enters a word (no spaces).
 *  - The program reverses the string and prints it.
 *  - It compares the original and reversed strings character by character.
 *  - If all characters match, it declares the string a palindrome.
 *
 * Input:
 *  - A string (max 99 characters, no spaces).
 *
 * Output:
 *  - The reversed string.
 *  - Whether or not the string is a palindrome.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:
 *      Enter the string:
 *      level
 *    Output:
 *      Reversed string: level
 *      It is a palindrome
 *
 *  Example 2:
 *    Input:
 *      Enter the string:
 *      hello
 *    Output:
 *      Reversed string: olleh
 *      It is not a palindrome
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];     // Stores the original string
    char reversed[100];  // Stores the reversed string
    int length, i, j, matchCount = 0;

    // Prompt user for a string
    printf("Enter the string:\n");
    scanf("%s", input);  // Reads a word (no spaces)

    // Find the length of the string
    length = strlen(input);

    // Reverse the string
    for (i = length - 1, j = 0; j < length; i--, j++)
    {
        reversed[j] = input[i];
    }
    reversed[length] = '\0';  // Null-terminate the reversed string

    // Print the reversed string
    printf("Reversed string: %s\n", reversed);

    // Compare each character of original and reversed strings
    for (i = 0; i < length; i++)
    {
        if (input[i] == reversed[i])
        {
            matchCount++;
        }
    }

    // If all characters match, it's a palindrome
    if (matchCount == length)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }

    return 0;
}
