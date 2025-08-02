/*
 * Filename    : Matrix/spiralmatrix.c
 * Description : Reads a square matrix from the user and prints its elements in spiral order.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Reads the size of a square matrix.
 *  - Reads matrix elements row-wise.
 *  - Prints the matrix.
 *  - Prints the elements of the matrix in spiral order.
 *
 * Sample Input:
 * Enter the number of rows in your matrix
 * 3
 * Enter the elements of your spiral matrix
 * 1 2 3
 * 4 5 6
 * 7 8 9
 *
 * Sample Output:
 * The input matrix is
 * 1    2    3
 * 4    5    6
 * 7    8    9
 *
 * The spiral matrix is
 * 1 2 3 6 9 8 7 4 5
 */

#include <stdio.h>

int main() {
    int n, i, j;
    int rows, cols;

    printf("Enter the number of rows in your matrix\n");
    scanf("%d", &rows);
    cols = rows;  // square matrix

    int mat[rows][cols];

    printf("Enter the elements of your spiral matrix\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The input matrix is\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("The spiral matrix is\n");

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Print the top row
        for (i = left; i <= right; i++) {
            printf("%d ", mat[top][i]);
        }
        top++;

        // Print the right column
        for (i = top; i <= bottom; i++) {
            printf("%d ", mat[i][right]);
        }
        right--;

        // Print the bottom row if still valid
        if (top <= bottom) {
            for (i = right; i >= left; i--) {
                printf("%d ", mat[bottom][i]);
            }
            bottom--;
        }

        // Print the left column if still valid
        if (left <= right) {
            for (i = bottom; i >= top; i--) {
                printf("%d ", mat[i][left]);
            }
            left++;
        }
    }

    printf("\n");
    return 0;
}
