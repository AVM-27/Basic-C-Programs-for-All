/*
 * Filename    : Recursion/pattern_recursive_number_triangle.c
 * Description : Prints a pattern of repeated numbers in increasing triangle format using recursion.
 *               Each row contains the row number printed as many times as the row number itself.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * Enter the maximum number of rows
 * 4
 *  1 
 *  2  2 
 *  3  3  3 
 *  4  4  4  4 
 */

#include <stdio.h>

// Recursive function to print pattern
void pattern(int rows) {
    if (rows == 0) {
        return; // Base case: do nothing for row 0
    }

    pattern(rows - 1);  // Recursive call for smaller rows

    // Print the current row after recursion unwinds
    for (int i = 1; i <= rows; i++) {
        printf(" %d ", rows);
    }
    printf("\n");
}

int main() {
    int rows;

    printf("Enter the maximum number of rows\n");
    scanf("%d", &rows);

    pattern(rows);  // Call to recursive pattern generator

    return 0;
}
