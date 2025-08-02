/*
 * Filename    : arrays/frequency_based_character_display.c
 * Description : Reads a set of characters and their frequencies, then prints each character
 *               as many times as its frequency.
 *               Example: If input is ['a', 3], ['b', 2], output will be "aaabb".
 *               This is useful for understanding character arrays, integer arrays, and loops.
 *
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - User enters the number of elements (n).
 *  - Then enters n characters and their corresponding frequencies.
 *  - The program then prints each character as many times as specified by its frequency.
 *
 * Sample I/O:
 * -------------------------------
 * Enter the number of elements
 * 3
 * Enter characters and their frequencies:
 * a 5
 * b 3
 * c 2
 * Output:
 * aaaaabbbcc
 * -------------------------------
 */

#include <stdio.h>

int main() {
    int i, j, n, freq;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    char chars[n];
    int freqs[n];

    // Input characters and frequencies
    printf("Enter characters and their frequencies:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &chars[i]);  // Notice the space before %c to skip newline
        scanf("%d", &freqs[i]);
    }

    // Output the characters according to frequency
    printf("Output:\n");
    for (i = 0; i < n; i++) {
        freq = freqs[i];
        for (j = 0; j < freq; j++) {
            printf("%c", chars[i]);
        }
    }

    printf("\n");
    return 0;
}
