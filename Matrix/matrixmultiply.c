/*
 * Filename    : Matrix/matrixmultiply.c
 * Description : Multiplies two matrices after validating their dimensions.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads the dimensions of two matrices.
 *  - Checks if matrix multiplication is possible (columns of 1st == rows of 2nd).
 *  - Reads matrix elements row-wise.
 *  - Performs matrix multiplication.
 *  - Prints the original matrices and the resulting product matrix.
 *
 * Input:
 *  - Dimensions (rows and columns) of two matrices.
 *  - Elements of both matrices entered row-wise.
 *
 * Output:
 *  - Prints the input matrices.
 *  - Prints the resulting product matrix if multiplication is possible.
 *  - Error message if matrices cannot be multiplied.
 *
 * Notes for Students:
 *  - Matrix multiplication requires first matrix's columns == second matrix's rows.
 *  - Resultant matrix dimension = rows of first matrix x columns of second matrix.
 *  - Use nested loops for input, output, and multiplication.
 *
 * Sample Input/Output:
 *  Enter the number of rows and columns of the 1st matrix
 *  2 3
 *  Enter the number of rows and columns of the 2nd matrix
 *  3 2
 *  Enter the elements of your 1st matrix ROW WISE
 *  1 2 3
 *  4 5 6
 *  Enter the elements of your 2nd matrix ROW WISE
 *  7 8
 *  9 10
 *  11 12
 *
 *  The first matrix is
 *  1   2   3
 *  4   5   6
 *
 *  The second matrix is
 *  7   8
 *  9   10
 *  11  12
 *
 *  The matrix obtained on multiplication is
 *  58  64
 *  139 154
 */

#include <stdio.h>

int main() {
    int m, n, o, p; // Dimensions of matrices
    int i, j, k;

    printf("Enter the number of rows and columns of the 1st matrix\n");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns of the 2nd matrix\n");
    scanf("%d %d", &o, &p);

    // Validate matrix multiplication condition
    if (n != o) {
        printf("These matrices cannot be multiplied\n");
        return 0;
    }

    int mat1[m][n], mat2[o][p], res[m][p];

    printf("Enter the elements of your 1st matrix ROW WISE\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of your 2nd matrix ROW WISE\n");
    for (i = 0; i < o; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nThe first matrix is\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix is\n");
    for (i = 0; i < o; i++) {
        for (j = 0; j < p; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    // Initialize result matrix to zero and perform multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            res[i][j] = 0;
            for (k = 0; k < n; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\nThe matrix obtained on multiplication is\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
