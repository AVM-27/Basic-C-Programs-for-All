/*
 * Filename    : Recursion/recursive_descending_check.c
 * Description : Recursively checks if an integer array is strictly descending.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * int arr[] = {10, 8, 6, 4, 2};
 *
 * Sample Output:
 * The array is descending.
 */

#include <stdio.h>

int isDescending(int arr[], int size) {
    if (size <= 1) {
        // Base case: If array has 0 or 1 element, it is descending
        return 1;
    } else {
        // Recursive case: Check if the current element is greater than the previous one
        if (arr[size - 1] > arr[size - 2]) {
            return 0;  // Not descending
        } else {
            return isDescending(arr, size - 1);  // Recursively check the rest of the array
        }
    }
}

int main() {
    int arr[] = {10, 8, 6, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isDescending(arr, size)) {
        printf("The array is descending.\n");
    } else {
        printf("The array is not descending.\n");
    }

    return 0;
}
