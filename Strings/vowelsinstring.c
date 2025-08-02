/*
 * Filename    : Strings/vowelsinstring.c
 * Description : Counts vowels, consonants, digits, and spaces in an input string.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Reads a line of text (supports spaces).
 *  - Iterates through each character and categorizes it as vowel, consonant, digit, or space.
 *  - Outputs counts for each category.
 *
 * Sample Input:
 * Enter your string
 * Hello World 123
 *
 * Sample Output:
 * The string contains
 * 3 vowels
 * 7 consonants
 * 3 digits
 * 2 spaces
 */

#include <stdio.h>
#include <string.h>   // For strlen if needed

int main()
{
    char line[150];      // Buffer to hold input string (max 149 chars + '\0')
    int i;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    // Prompt user for input
    printf("Enter your string\n");

    // Use fgets instead of gets for safety
    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t length = strlen(line);
    if (length > 0 && line[length - 1] == '\n') {
        line[length - 1] = '\0';
    }

    // Iterate through each character to categorize
    for (i = 0; line[i] != '\0'; ++i)
    {
        char ch = line[i];

        // Check vowels (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            ++vowels;
        }
        // Check consonants (alphabets that are not vowels)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            ++consonants;
        }
        // Check digits
        else if (ch >= '0' && ch <= '9')
        {
            ++digits;
        }
        // Check spaces
        else if (ch == ' ')
        {
            ++spaces;
        }
        // Ignore other characters (punctuation, special chars, etc.)
    }

    // Print the counts
    printf("The string contains\n");
    printf("%d vowels\n", vowels);
    printf("%d consonants\n", consonants);
    printf("%d digits\n", digits);
    printf("%d spaces\n", spaces);

    return 0;
}
