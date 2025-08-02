/*
 * Filename    : Strings/VowelConsonantCounter.c
 * Description : Counts the number of vowels and consonants in a given word.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Accepts a single word (no spaces) from the user.
 *  - Iterates through each character of the string.
 *  - Checks if the character is a vowel or consonant.
 *  - Ignores digits and symbols.
 *
 * Input :
 *  Enter your string
 *  Education
 *
 * Output :
 *  The number of vowels are 5 and the number of consonants are 4
 *
 * Note:
 *  - Case-insensitive.
 *  - Assumes only alphabetic input.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowel_count = 0, consonant_count = 0;
    int i;

    printf("Enter your string: ");
    scanf("%s", str);

    int n = strlen(str);

    for (i = 0; i < n; i++) {
        char ch = tolower(str[i]);  // Make character lowercase for comparison

        if (isalpha(ch)) {
            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
        // If not alphabetic, ignore (could extend to count symbols/digits separately)
    }

    printf("The number of vowels are %d and the number of consonants are %d\n", vowel_count, consonant_count);

    return 0;
}
