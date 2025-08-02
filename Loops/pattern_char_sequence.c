/*
 * Filename    : Loops/pattern_char_sequence.c
 * Description : Prints a pattern of alphabetical characters in increasing and decreasing rows.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads the number of columns (num1) for the pattern.
 *  - Prints characters starting from 'a', increasing row-wise up to num1 columns.
 *  - Then prints characters decreasing back down, continuing character sequence.
 *
 * Input:
 *  - Number of columns (integer).
 *
 * Output:
 *  - Pattern of alphabetical characters printed in increasing and decreasing rows.
 *
 * Sample Input/Output:
 *  How many columns do you want?
 *  3
 *  a 
 *  b c 
 *  d e f 
 *  g h 
 *  i
 */

#include <stdio.h>

int main() {
    int num1, i, j;
    int a = 97; // ASCII for 'a'

    printf("How many columns do you want?\n");
    scanf("%d", &num1);

    // Increasing pattern
    for (i = 1; i <= num1; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", a++);
        }
        printf("\n");
    }

    // Decreasing pattern
    for (i = num1 - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%c ", a++);
        }
        printf("\n");
    }

    return 0;
}
