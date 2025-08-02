/*
 * Filename    : Search/linearsearch.c
 * Description : Performs a linear search to find all occurrences of an element in an array.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads the size of the array and its elements from the user.
 *  - Reads the element to search for.
 *  - Searches the array linearly and prints all positions where the element is found.
 *  - If the element is not found, notifies the user.
 *
 * Input:
 *  - Size of the array (integer).
 *  - Array elements (integers).
 *  - Element to search for (integer).
 *
 * Output:
 *  - Positions of the element in the array (1-based indexing).
 *  - Message if element is not found.
 *
 * Notes for Students:
 *  - Uses simple linear traversal for searching.
 *  - Positions printed are human-friendly (starting at 1).
 *  - Counter variable is initialized to zero to track occurrences.
 *
 * Sample Input/Output:
 *  Enter the size of your array
 *  5
 *  Enter array elements
 *  1 2 3 4 3
 *  Enter the element that you want to check for
 *  3
 *  The element is present at position 3
 *  The element is present at position 5
 */

#include <stdio.h>

int main() {
    int num, i, check, occurrences = 0;

    printf("Enter the size of your array\n");
    scanf("%d", &num);

    int arr[num];

    printf("Enter array elements\n");
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element that you want to check for\n");
    scanf("%d", &check);

    for(i = 0; i < num; i++) {
        if(arr[i] == check) {
            occurrences++;
            printf("The element is present at position %d\n", i + 1);
        }
    }

    if(occurrences == 0) {
        printf("The element is not present\n");
    }

    return 0;
}
