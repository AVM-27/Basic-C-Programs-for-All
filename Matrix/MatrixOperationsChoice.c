/*
 * Filename    : Matrix/MatrixOperationsChoice.c
 * Description : This program performs various operations on a matrix based on user choice:
 *               1. Print the entire matrix.
 *               2. Find and display the minimum and maximum values in the 2nd column.
 *               3. Calculate and display the difference between the maximum and minimum values in the 2nd column.
 *               4. Calculate and display the average of the values in the 1st column.
 *
 *               The matrix has 3 columns and 'rows' number of rows as input by the user.
 *
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * How to use:
 *  - First, input the number of rows.
 *  - Then input the matrix elements row-wise (3 integers per row).
 *  - Next, input a choice number (1 to 4) to select the operation.
 *
 * Sample Input:
 *  3
 *  10 20 30
 *  40 50 60
 *  70 80 90
 *  2
 *
 * Sample Output:
 *  20
 *  80
 *
 * Explanation:
 *  For choice 2, the program extracts the 2nd column [20, 50, 80],
 *  finds minimum (20) and maximum (80) and prints them.
 */

#include <stdio.h>

int main() {
    int rows;
    int i, j, sum = 0, x, temp, average, difference;
    
    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    int mat[rows][3];
    
    // Input matrix elements row-wise
    printf("Enter matrix elements (%d rows and 3 columns):\n", rows);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    // Input choice for operation
    printf("Enter operation choice (1-4):\n");
    printf("1: Print matrix\n2: Min and Max of 2nd column\n3: Difference of max and min (2nd column)\n4: Average of 1st column\n");
    scanf("%d", &x);
    
    if (x == 1) {
        // Print the matrix
        printf("Matrix:\n");
        for (i = 0; i < rows; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d\t", mat[i][j]);
            }
            printf("\n");
        }
    }
    else if (x == 2) {
        // Find min and max in 2nd column
        int arr1[rows];
        for (i = 0; i < rows; i++) {
            arr1[i] = mat[i][1];
        }
        
        // Sort arr1 (2nd column) in ascending order
        for (i = 0; i < rows - 1; i++) {
            for (j = i + 1; j < rows; j++) {
                if (arr1[i] > arr1[j]) {
                    temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
        printf("Minimum value in 2nd column: %d\n", arr1[0]);
        printf("Maximum value in 2nd column: %d\n", arr1[rows - 1]);
    }
    else if (x == 3) {
        // Difference between max and min in 2nd column
        int arr1[rows];
        for (i = 0; i < rows; i++) {
            arr1[i] = mat[i][1];
        }
        
        // Sort arr1 in ascending order
        for (i = 0; i < rows - 1; i++) {
            for (j = i + 1; j < rows; j++) {
                if (arr1[i] > arr1[j]) {
                    temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
        difference = arr1[rows - 1] - arr1[0];
        printf("Difference between max and min in 2nd column: %d\n", difference);
    }
    else if (x == 4) {
        // Average of 1st column
        for (i = 0; i < rows; i++) {
            sum += mat[i][0];
        }
        average = sum / rows;
        printf("Average of 1st column: %d\n", average);
    }
    else {
        printf("Invalid choice.\n");
    }
    
    return 0;
}
