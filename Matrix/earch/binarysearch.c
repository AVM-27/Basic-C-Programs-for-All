/*
 * Filename    : Search/binarysearch.c
 * Description : Implementation of binary search on a sorted integer array.
 *               Demonstrates searching for a given target value efficiently.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Reads the size of the array from user input.
 *  - Reads a sorted array of integers.
 *  - Reads the target integer to search.
 *  - Uses the binary search algorithm to find the target in the array.
 *  - Prints the index of the found element or -1 if not found.
 *
 * Explanation:
 *  Binary search works by repeatedly dividing the search interval in half.
 *  - Start with the entire array.
 *  - Compare the middle element with the target.
 *  - If equal, return the index.
 *  - If target is smaller, continue searching in the left half.
 *  - If target is larger, continue searching in the right half.
 *  This method requires the array to be sorted.
 *
 * Sample Input:
 * 5
 * 1 3 5 7 9
 * 7
 *
 * Sample Output:
 * Found at index 3
 */

#include <stdio.h>

int main() {
    int n;  // Number of elements in the array
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    printf("Enter %d sorted elements (in ascending order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;  // The number to be searched
    printf("Enter the number to search:\n");
    scanf("%d", &target);

    int low = 0;         // Start index of the search interval
    int high = n - 1;    // End index of the search interval
    int mid;             // Middle index
    int foundIndex = -1; // To store the index of found element (-1 if not found)

    // Binary search loop
    while (low <= high) {
        mid = (low + high) / 2;  // Find middle index

        if (arr[mid] == target) {
            foundIndex = mid;    // Element found
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;       // Search in right half
        }
        else {
            high = mid - 1;      // Search in left half
        }
    }

    // Output result
    if (foundIndex != -1) {
        printf("Found at index %d\n", foundIndex);
    } else {
        printf("Not found -1\n");
    }

    return 0;
}
