/*
 * Filename    : arrays/arraydescend.c
 * Description : Checks whether an input array is in strictly descending order using recursion.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * Enter the size of the array
 * 5
 * 100 75 50 25 10
 *
 * Sample Output:
 * The array is descending.
 */

#include <stdio.h>

// Recursive function to check if array is strictly descending
int isDescending(int arr[], int size) {
    if (size <= 1) return 1;  // Base case: 0 or 1 element is always descending
    if (arr[size - 1] >= arr[size - 2]) return 0; // Not strictly descending
    return isDescending(arr, size - 1); // Recursive check
}

int main() {
    int size;
    printf("Enter the size of the array\n");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    if (isDescending(arr, size)) {
        printf("Th
