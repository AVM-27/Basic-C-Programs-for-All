/*
 * Filename    : Search/missingelement.c
 * Description : Finds the smallest missing element in an array of consecutive numbers starting from 1.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads the size of the array and the array elements from the user.
 *  - Assumes the array should contain consecutive numbers starting from 1.
 *  - Finds and prints the smallest missing element in the sequence.
 *
 * Input:
 *  - Size of the array (integer).
 *  - Array elements (integers).
 *
 * Output:
 *  - The smallest missing element in the array.
 *
 * Notes for Students:
 *  - The array is expected to contain numbers starting at 1 in sorted order.
 *  - If no element is missing within the range, the code returns the first missing number after the last element.
 *  - Uses a simple linear scan to find the missing element.
 *
 * Sample Input/Output:
 *  Enter the size of the array
 *  5
 *  Enter the elements of the array
 *  1 2 3 5 6
 *  The array is
 *  1 2 3 5 6 
 *  The smallest missing element is 4
 */

#include <stdio.h>

int main() {
    int size, i, missing = -1;

    printf("Enter the size of the array\n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array is\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Find the smallest missing element assuming sorted array starting from 1
    for(i = 0; i < size; i++) {
        if(arr[i] != i + 1) {
            missing = i + 1;
            break;
        }
    }

    // If no missing element found within array, the missing element is next integer after last element
    if(missing == -1) {
        missing = size + 1;
    }

    printf("The smallest missing element is %d\n", missing);

    return 0;
}
