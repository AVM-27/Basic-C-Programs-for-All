/*
 * Filename    : Recursion/recursive_incremental_number_pattern.c
 * Description : Prints a number triangle pattern using recursion. Each row prints numbers
 *               from 1 up to the current row number. The pattern is printed top-down using recursion.
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

// Recursive function to print increasing number pattern
void pattern(int rows) {
    if (rows == 0)
        return;

    // Recursive call for previous rows
    pattern(rows - 1);

    // Print current row
    for (int i = 1; i <= rows; i++) {
        printf(" %d ", i);
    }
    printf("\n");
}

int main() {
    int rows;

    printf("Enter the maximum number of rows\n");
    scanf("%d", &rows);

    pattern(rows);  // Function call

    return 0;
}
