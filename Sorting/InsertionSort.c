/*
 * Filename    : Sorting/InsertionSort.c
 * Description : This program demonstrates the Insertion Sort algorithm on an integer array.
 *               It sorts the array in ascending order using a comparison-based method.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - The user inputs the size of the array and the elements.
 *  - The program sorts the array using **Insertion Sort**.
 *  - Insertion Sort works by building a sorted part of the array one element at a time,
 *    inserting each new element into its correct position.
 *
 * Input:
 *  - An integer: number of elements in the array.
 *  - The array elements (integers).
 *
 * Output:
 *  - The sorted array in ascending order.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:
 *      Enter the size of your array:
 *      5
 *      Enter the elements of your array:
 *      4 2 5 1 3
 *    Output:
 *      Sorted array:
 *      1 2 3 4 5
 *
 *  Example 2:
 *    Input:
 *      Enter the size of your array:
 *      6
 *      Enter the elements of your array:
 *      10 20 5 15 1 8
 *    Output:
 *      Sorted array:
 *      1 5 8 10 15 20
 */

#include <stdio.h>

int main()
{
    int i, j, key, num;

    // Prompt user for array size
    printf("Enter the size of your array:\n");
    scanf("%d", &num);

    // Declare array of user-defined size
    int arr[num];

    // Prompt user to enter elements
    printf("Enter the elements of your array:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort algorithm
    for (i = 1; i < num; i++)
    {
        key = arr[i];        // The current element to be positioned
        j = i - 1;

        // Shift elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place the key at its correct sorted position
        arr[j + 1] = key;
    }

    // Output the sorted array
    printf("Sorted array:\n");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
