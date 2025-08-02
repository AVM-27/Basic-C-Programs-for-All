/*
 * Filename    : Matrix/Display2DArray.c
 * Description : Demonstrates input and display of a 2D array using functions.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 */

#include <stdio.h>

void disp(int m, int n, int arr[m][n]);

int main()
{
    int m, n, i, j;
    printf("Enter the number of rows and columns of your 2D Array:\n");
    scanf("%d%d", &m, &n);

    int arr[m][n];

    printf("Enter the elements row-wise:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    disp(m, n, arr);

    return 0;
}

void disp(int m, int n, int arr[m][n])
{
    int i, j;
    printf("The elements of your 2D Array are:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
