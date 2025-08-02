/*
 * Filename    : Matrix/matrixsubtract.c
 * Description : Subtracts two matrices of same dimension and displays the result.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads the number of rows and columns for two matrices.
 *  - Reads the elements of the two matrices from the user (row-wise).
 *  - Subtracts the second matrix from the first.
 *  - Prints the first matrix, second matrix, and the resulting difference matrix.
 *
 * Input:
 *  - Number of rows and columns (integers).
 *  - Elements of first matrix (float values).
 *  - Elements of second matrix (float values).
 *
 * Output:
 *  - The first matrix.
 *  - The second matrix.
 *  - The resulting matrix after subtraction (a[i][j] - b[i][j]).
 *
 * Notes for Students:
 *  - Matrix subtraction requires both matrices to be of the same size.
 *  - Iteration is done row-wise and column-wise to process each element.
 *  - Floating point values are used to allow decimal elements.
 *
 * Sample Input/Output:
 *  Enter the number of rows of your matrices a and b
 *  2
 *  Enter the number of columns of your matrices a and b
 *  3
 *  Enter the elements of your first 2 X 3 matrix row wise
 *  1.0 2.0 3.0
 *  4.0 5.0 6.0
 *  Enter the elements of your second 2 X 3 matrix row wise
 *  6.0 5.0 4.0
 *  3.0 2.0 1.0
 *  The first matrix is
 *  1.0    2.0    3.0
 *  4.0    5.0    6.0
 *  The second matrix is
 *  6.0    5.0    4.0
 *  3.0    2.0    1.0
 *  The difference between both matrices is
 *  -5.0   -3.0   -1.0
 *   1.0    3.0    5.0
 */

#include <stdio.h>

int main() {
    int row, column;
    printf("Enter the number of rows of your matrices a and b\n");
    scanf("%d", &row);
    printf("Enter the number of columns of your matrices a and b\n");
    scanf("%d", &column);

    float a[row][column], b[row][column], c[row][column];
    int i, j;

    printf("Enter the elements of your first %d X %d matrix row wise\n", row, column);
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    printf("Enter the elements of your second %d X %d matrix row wise\n", row, column);
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            scanf("%f", &b[i][j]);
        }
    }

    // Subtract matrices: c = a - b
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    // Display first matrix
    printf("The first matrix is\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("%.1f\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Display second matrix
    printf("The second matrix is\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("%.1f\t", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Display difference matrix
    printf("The difference between both matrices is\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("%.1f\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
