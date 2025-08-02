/*
 * Filename    : Arrays/ArrayDescendingCheck.c
 * Description : Checks whether an input array is in strictly descending order using recursion.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * 📌 Program Overview:
 *  - Takes an array of integers as input from the user.
 *  - Uses a recursive function to determine if the array elements are in strictly decreasing order.
 *  - Strictly decreasing means: each element must be less than the previous one (no duplicates or equal elements allowed).
 *
 * 🧾 Input:
 *  - An integer representing the number of elements in the array.
 *  - That many integers entered by the user.
 *
 * 🖨️ Output:
 *  - A message indicating whether the array is strictly descending or not.
 *
 * 🧠 Concepts Covered:
 *  - Recursion
 *  - Arrays
 *  - Input/output with `scanf` and `printf`
 *
 * 📘 Notes for Students:
 *  - Recursion is when a function calls itself to break a large problem into smaller ones.
 *  - The function `isDescending()` compares the last two elements each time, then moves backward.
 *  - The base case (stopping condition) is when the size becomes 1 or 0.
 *
 * 🔎 Sample Input/Output:
 *  Example 1:
 *    Input :
 *      Enter the size of the array
 *      5
 *      Enter 5 elements:
 *      100 75 50 25 10
 *    Output:
 *      The array is in strictly descending order.
 *
 *  Example 2:
 *    Input :
 *      Enter the size of the array
 *      4
 *      Enter 4 elements:
 *      10 9 9 5
 *    Output:
 *      The array is NOT in strictly descending order.
 */

#include <stdio.h>

// Recursive function to check if the array is strictly descending
int isDescending(int arr[], int size) {
    // Base case: if the array has 0 or 1 element, it's descending by default
    if (size <= 1)
        return 1;

    // If the current element is NOT less than the previous one, it's not descending
    if (arr[size - 1] >= arr[size - 2])
        return 0;

    // Recurse with one less element
    return isDescending(arr, size - 1);
}

int main() {
    int size;

    // Ask the user how many elements the array will have
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    int arr[size];  // Declare array of the given size

    // Prompt user to enter the elements of the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the recursive function and display the result
    if (isDescending(arr, size)) {
        printf("The array is in strictly descending order.\n");
    } else {
        printf("The array is NOT in strictly descending order.\n");
    }

    return 0;
}
