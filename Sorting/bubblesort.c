/*
 * Filename    : Sorting/bubblesort.c
 * Description : Implements Bubble Sort algorithm to sort an array of integers.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads the size of the array and the elements from the user.
 *  - Sorts the array using the Bubble Sort technique.
 *  - After each pass, prints the current state of the array.
 *  - Finally prints the fully sorted array.
 *
 * Input:
 *  - Size of the array (integer).
 *  - Elements of the array (integers).
 *
 * Output:
 *  - Array state after each pass.
 *  - Final sorted array.
 *
 * Notes for Students:
 *  - Bubble Sort compares adjacent elements and swaps them if they are in the wrong order.
 *  - With each pass, the largest unsorted element "bubbles up" to its correct position.
 *  - The number of passes required is one less than the size of the array.
 *
 * Sample Input/Output:
 *  Enter the size of your array
 *  5
 *  Enter the elements of your array
 *  5 1 4 2 8
 *  After pass 1
 *  1 4 2 5 8
 *  After pass 2
 *  1 2 4 5 8
 *  After pass 3
 *  1 2 4 5 8
 *  After pass 4
 *  1 2 4 5 8
 *  The sorted array is
 *  1 2 4 5 8
 */

#include <stdio.h>

int main() {
    int num, i, j, temp, pass = 1;

    printf("Enter the size of your array\n");
    scanf("%d", &num);

    int arr[num];
    printf("Enter the elements of your array\n");
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort algorithm
    for(i = 0; i < num - 1; i++) {
        for(j = 0; j < num - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap adjacent elements if they are out of order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        // Print array after each pass
        printf("After pass %d\n", pass++);
        for(int k = 0; k < num; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }

    printf("The sorted array is\n");
    for(i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
