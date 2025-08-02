/*
 * Filename    : Recursion/pattern_recursive_incrementing.c
 * Description : Recursively prints a pattern of incrementing numbers in a triangle.
 *               Each row contains numbers from 1 up to the row number.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * Enter the maximum number of rows
 * 4
 *  1 
 *  1  2 
 *  1  2  3 
 *  1  2  3  4 
 */

#include <stdio.h>

// Recursive function to print pattern
void pattern(int rows) {
    if (rows != 0) {
        pattern(rows - 1);  // Recursive call for rows-1
    }

    // Print numbers from 1 to current row
    for (int i = 1; i <= rows; i++) {
        printf(" %d ", i);
    }

    // Print newline after completing each row
    if (rows > 0) {
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the maximum number of rows\n");
    scanf("%d", &rows);

    pattern(rows);  // Start printing the pattern

    return 0;
}
