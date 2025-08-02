/*
 * Filename    : Recursion/recursive_binary_search.c
 * Description : 
 *   Performs binary search using recursion to locate an element 
 *   in a sorted integer array.
 *   Demonstrates recursive function logic and base case handling.
 *
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * Enter the size of your array
 * 5
 * Enter the elements of your array in ORDER
 * 10 20 30 40 50
 * Enter the element to be searched
 * 40
 * Element found at position: 4
 */

#include <stdio.h>

// Recursive binary search function
int bsearch(int data[], int first, int last, int value) {
    if (first > last) {
        return -1;  // Base case: not found
    }

    int middle = (first + last) / 2;

    if (data[middle] == value) {
        return middle;
    } else if (value < data[middle]) {
        return bsearch(data, first, middle - 1, value);  // Search left half
    } else {
        return bsearch(data, middle + 1, last, value);   // Search right half
    }
}

int main() {
    int size, value, ans;
    printf("Enter the size of your array\n");
    scanf("%d", &size);

    int data[size];  // Variable Length Array

    printf("Enter the elements of your array in ORDER\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }

    printf("Enter the element to be searched\n");
    scanf("%d", &value);

    ans = bsearch(data, 0, size - 1, value);

    if (ans != -1)
        printf("Element found at position: %d\n", ans + 1);  // +1 for 1-based index
    else
        printf("Element not found.\n");

    return 0;
}
