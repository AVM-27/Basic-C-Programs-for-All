/*
 * Filename    : Search/BinarySearch.c
 * Description : This program performs a binary search on a sorted array of integers to find whether a given element exists.
 *               It demonstrates the classic binary search algorithm using an iterative approach.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - The user inputs the size of the array and the array elements in **ascending order**.
 *  - The user is then prompted to enter the element they want to search for.
 *  - The program uses **binary search** to efficiently find the element.
 *  - Binary search divides the array in half each time, reducing the search space logarithmically.
 *  - If the element is found, its position (1-based index) is displayed.
 *  - If the element is not found, a message is printed.
 *
 * Input:
 *  - Integer n: number of elements in the array.
 *  - n integers: elements of the array (in ascending order).
 *  - Integer: element to search for.
 *
 * Output:
 *  - If the element is found: displays its position (1-based index).
 *  - If not found: displays a "not found" message.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:
 *      Enter the size of your array:
 *      5
 *      ENTER THE ELEMENTS OF YOUR ARRAY IN ASCENDING ORDER!!!
 *      1 3 5 7 9
 *      Enter the element that you want to check for:
 *      5
 *    Output:
 *      The element is present and is at position 3
 *
 *  Example 2:
 *    Input:
 *      Enter the size of your array:
 *      4
 *      ENTER THE ELEMENTS OF YOUR ARRAY IN ASCENDING ORDER!!!
 *      10 20 30 40
 *      Enter the element that you want to check for:
 *      25
 *    Output:
 *      Element not found
 */

#include <stdio.h>

int main()
{
    int mid, num, i, found = 0;
    int min, max, searchElement;

    // Prompt user for size of the array
    printf("Enter the size of your array:\n");
    scanf("%d", &num);

    // Declare array of user-specified size
    int arr[num];

    // Ask the user to enter array elements in ascending order
    printf("ENTER THE ELEMENTS OF YOUR ARRAY IN ASCENDING ORDER!!!\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Prompt user for the element to search
    printf("Enter the element that you want to check for:\n");
    scanf("%d", &searchElement);

    // Set initial search bounds
    min = 0;
    max = num - 1;

    // Begin binary search loop
    while (min <= max)
    {
        mid = (min + max) / 2;

        if (searchElement > arr[mid])
        {
            min = mid + 1; // Search in the right half
        }
        else if (searchElement < arr[mid])
        {
            max = mid - 1; // Search in the left half
        }
        else // Element found
        {
            found = 1;
            printf("The element is present and is at position %d\n", mid + 1); // 1-based position
            break; // Exit the loop since element is found
        }
    }

    // If the element was not found after the loop
    if (!found)
    {
        printf("Element not found\n");
    }

    return 0;
}
