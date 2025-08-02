/*
 * Filename    : Patterns/triangle_sequential_numbers.c
 * Description : Prints a left-aligned triangle pattern of sequential numbers using nested loops.
 *               Each row contains an increasing number of elements, continuing the sequence.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * Enter the number of rows you want in your pattern
 * 4
 * 1 
 * 2 3 
 * 4 5 6 
 * 7 8 9 10 
 */

#include <stdio.h>

int main() {
    int i, j, a = 1, rows;

    printf("Enter the number of rows you want in your pattern\n");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop to print numbers in each row
        for (j = 1; j <= i; j++) {
            printf("%d ", a);
            a++;  // Increment the number
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}
