/*
 * Filename    : Arrays/Display2DArray.c
 * Description : Reads a 2D array (matrix) from the user and displays it.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Prompts user to enter the number of rows and columns.
 *  - Accepts elements row-wise for the 2D array.
 *  - Uses a function to print the 2D array in matrix form.
 *
 * Input:
 *  - Number of rows (m) and columns (n).
 *  - m*n integers as elements of the array.
 *
 * Output:
 *  - The 2D array displayed in rows and columns with tab spacing.
 *
 * Important Concepts:
 *  - 2D arrays in C are arrays of arrays.
 *  - Passing 2D arrays to functions requires specifying column size.
 *  - Nested loops are used for iterating rows and columns.
 *
 * Sample Input/Output:
 * Example:
 * Enter the number of rows and columns of your 2D Array
 * 2 3
 * Enter the elements row-wise
 * 1 2 3
 * 4 5 6
 *
 * The elements of your 2D Array are:
 * 1    2    3
 * 4    5    6
 */

#include <stdio.h>

// Function prototype to display 2D array elements
// We must specify the number of columns for the 2D array parameter
void disp(int rows, int cols, int arr[rows][cols]);

int main() {
    int rows, cols;

    // Prompt user for rows and columns with a clear message
    printf("Enter the number of rows and columns of your 2D Array:\n");
    scanf("%d %d", &rows, &cols);

    // Declare the 2D array with variable size based on user input
    int arr[rows][cols];

    printf("Enter the elements row-wise:\n");
    // Nested loop to read the elements row by row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Call the function to display the array
    disp(rows, cols, arr);

    return 0;
}

// Function to print the 2D array in matrix format
void disp(int rows, int cols, int arr[rows][cols]) {
    printf("The elements of your 2D Array are:\n");

    // Nested loops to iterate through each element
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Print each element followed by a tab for formatting
            printf("%d\t", arr[i][j]);
        }
        // Newline after each row to form matrix layout
        printf("\n");
    }
}
