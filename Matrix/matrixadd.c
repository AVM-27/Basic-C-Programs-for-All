/*
 * Filename    : Matrix/matrixadd.c
 * Description : Adds two square matrices of size r x r and displays the result.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads the dimension of two square matrices (same size).
 *  - Reads elements of both matrices row-wise.
 *  - Computes the element-wise sum of the two matrices.
 *  - Prints the original matrices and their sum.
 *
 * Input:
 *  - Integer r representing rows/columns of square matrices.
 *  - Elements of matrix A (r x r).
 *  - Elements of matrix B (r x r).
 *
 * Output:
 *  - Matrix A, Matrix B, and their sum (A + B).
 *
 * Notes:
 *  - Uses variable-length arrays (VLAs), requires C99 or later.
 *  - Prints matrix elements with one decimal precision.
 *
 * Sample Input/Output:
 *  Enter the number of rows of your square matrices a and b
 *  2
 *  Enter the elements of your first 2 X 2 matrix row wise
 *  1 2
 *  3 4
 *  Enter the elements of your second 2 X 2 matrix row wise
 *  5 6
 *  7 8
 *  The first matrix is
 *  1.0    2.0
 *  3.0    4.0
 *
 *  The second matrix is
 *  5.0    6.0
 *  7.0    8.0
 *
 *  The sum of both matrices is
 *  6.0    8.0
 *  10.0   12.0
 */

#include <stdio.h>

int main() {
    int r;
    printf("Enter the number of rows of your square matrices a and b\n");
    scanf("%d", &r);

    float a[r][r], b[r][r], c[r][r];
    int i, j;

    printf("Enter the elements of your first %d X %d matrix row wise\n", r, r);
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    printf("Enter the elements of your second %d X %d matrix row wise\n", r, r);
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%f", &b[i][j]);
        }
    }

    // Calculate sum matrix c = a + b
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The first matrix is\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            printf("%.1f\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix is\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            printf("%.1f\t", b[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of both matrices is\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            printf("%.1f\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
