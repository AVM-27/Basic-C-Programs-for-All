/*
 * Filename    : Arrays/FrequencyCounter.c
 * Description : This program calculates the frequency of each element in an integer array.
 *               It demonstrates nested loops and array usage to count repeated elements.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Explanation:
 *  - The program reads an array of integers from the user.
 *  - It prints the array.
 *  - Then, for each element, it counts how many times it appears in the array.
 *  - It prints the frequency of every element, including duplicates.
 *  - This version shows **raw frequency**, meaning duplicates will be reported multiple times.
 *
 * Input:
 *  - An integer `n` representing the size of the array.
 *  - `n` integers to be stored in the array.
 *
 * Output:
 *  - The array itself.
 *  - For each element, its frequency in the array.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Input:
 *      Enter the size of your array:
 *      5
 *      Enter the elements of your array:
 *      1 2 1 3 2
 *    Output:
 *      Your array is:
 *      1 2 1 3 2
 *      1 is present 2 times
 *      2 is present 2 times
 *      1 is present 2 times
 *      3 is present 1 times
 *      2 is present 2 times
 *
 * Note:
 *  - If you want each unique element's frequency shown only once, additional logic using flags or a visited array is needed.
 */

#include <stdio.h>

int main()
{
    int i, j, size, frequency = 0;

    // Prompt user for size of the array
    printf("Enter the size of your array:\n");
    scanf("%d", &size);

    // Declare arrays to hold input and a copy for comparison
    int arr1[size], arr2[size];

    // Prompt user to input elements
    printf("Enter the elements of your array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];  // Copy to a second array (not strictly needed here)
    }

    // Display the array to the user
    printf("Your array is:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Count frequency of each element
    for (i = 0; i < size; i++)
    {
        frequency = 0;  // Reset frequency counter for each element

        for (j = 0; j < size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                frequency++;
            }
        }

        // Print frequency of the current element
        printf("%d is present %d times\n", arr1[i], frequency);
    }

    return 0;
}
