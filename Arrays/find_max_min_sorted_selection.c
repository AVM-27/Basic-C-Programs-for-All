/*
 * Filename    : Arrays/FindMaxMinSortedSelection.c
 * Description : Reads an array, sorts it using the Selection Sort algorithm,
 *               and prints the maximum and minimum values in the array.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * 📌 Program Overview:
 *  - Accepts an integer `n` from the user (number of elements in the array).
 *  - Accepts `n` integer elements and stores them in an array.
 *  - Sorts the array using the Selection Sort algorithm.
 *  - Prints the **maximum** and **minimum** values from the sorted array.
 *
 * 🧾 Input:
 *  - First: Number of elements (integer).
 *  - Then: That many integers as elements of the array.
 *
 * 🖨️ Output:
 *  - The maximum and minimum values from the array after sorting.
 *
 * 🧠 Concepts Covered:
 *  - Arrays
 *  - Sorting (Selection Sort)
 *  - Finding maximum and minimum values
 *
 * 📘 Notes for Students:
 *  - Selection Sort finds the smallest element and moves it to the front.
 *  - After sorting, the **first element** is the minimum and the **last element** is the maximum.
 *  - Sorting is helpful when you want to perform operations like finding median, mode, etc.
 *
 * 🔎 Sample Input/Output:
 *  Example 1:
 *    Input :
 *      Enter number of elements:
 *      5
 *      Enter 5 elements:
 *      4 9 1 7 3
 *    Output:
 *      Maximum is 9
 *      Minimum is 1
 *
 *  Example 2:
 *    Input :
 *      Enter number of elements:
 *      3
 *      Enter 3 elements:
 *      10 20 5
 *    Output:
 *      Maximum is 20
 *      Minimum is 5
 */

#include <stdio.h>

// Function to perform sorting and print max/min values
void MaxMin(int num);

int main() {
    int num;

    // Prompt user for array size
    printf("Enter number of elements:\n");
    scanf("%d", &num);

    // Function call to find max and min after sorting
    MaxMin(num);

    return 0;
}

void MaxMin(int num) {
    int arr[num];
    int i, j, minIndex, temp;

    // Prompt user to input array elements
    printf("Enter %d elements:\n", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort Logic
    for (i = 0; i < num - 1; i++) {
        minIndex = i; // Assume current index has the smallest element

        // Find the index of the smallest element in the remaining array
        for (j = i + 1; j < num; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap if a smaller element was found
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // After sorting:
    // First element is the minimum, last is the maximum
    printf("Maximum is %d\n", arr[num - 1]);
    printf("Minimum is %d\n", arr[0]);
}
