/*
 * Filename    : Sorting/selection_sort_verbose.c
 * Description : Implements the Selection Sort algorithm with detailed debugging output.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads an array size and its elements from the user.
 *  - Performs selection sort to sort the array in ascending order.
 *  - After each pass, prints the intermediate state of the array.
 *  - Provides debug statements to show comparisons done during sorting.
 *
 * Input:
 *  - Size of the array (integer).
 *  - Elements of the array (integers).
 *
 * Output:
 *  - Step-by-step debugging information of element comparisons.
 *  - Array state after each pass of the selection sort.
 *  - Final sorted array.
 *
 * Notes for Students:
 *  - Selection sort repeatedly selects the minimum element from the unsorted part and swaps it with the first unsorted element.
 *  - This version shows the comparisons between elements in each pass for better understanding.
 *  - Swapping is done inside the inner loop which is slightly non-standard, normally swap is done after the inner loop.
 *
 * Sample Input/Output:
 *  Enter the size of your array
 *  4
 *  Enter the elements of your array
 *  64 25 12 22
 *  arr[0]>arr[1] == 1
 *  arr[1]>arr[2] == 1
 *  arr[0]>arr[2] == 1
 *  ...
 *  For pass 1
 *  12 25 64 22
 *  ...
 *  The array after sorting is
 *  12 22 25 64
 */

#include <stdio.h>

int main() {
    int n, i, j, pass = 1;
    int minIndex, k, temp;

    printf("Enter the size of your array\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of your array\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array while sorting is\n");
    for(i = 0; i < n; i++) {
        minIndex = i;

        // Find the index of the smallest element in the unsorted part
        for(j = i + 1; j < n; j++) {
            // Print debug info about comparison
            printf("arr[%d]>arr[%d] == %d\n", minIndex, j, (arr[minIndex] > arr[j]));

            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }

            // Swap after each comparison (Note: Typically swap after inner loop)
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }

        printf("For pass %d\n", pass++);
        for(k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }

    printf("The array after sorting is \n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
