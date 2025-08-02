/*
 * Filename    : Arrays/find_max_min_sorted_selection.c
 * Description : Reads an array, sorts it using selection sort,
 *               and prints the maximum and minimum values.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Reads size of the array.
 *  - Reads array elements from the user.
 *  - Sorts the array using selection sort algorithm.
 *  - After sorting, prints the maximum and minimum elements.
 *
 * Sample Input:
 * 5
 * 4 9 1 7 3
 *
 * Sample Output:
 * Maximum is 9
 * Minimum is 1
 */

#include <stdio.h>

// Function to sort array and print max & min
void maxmin(int num);

int main() {
    int num;

    printf("Enter number of elements:\n");
    scanf("%d", &num);

    maxmin(num);

    return 0;
}

void maxmin(int num) {
    int arr[num];
    int i, j, key, temp;

    printf("Enter %d elements:\n", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for (i = 0; i < num - 1; i++) {
        key = i;
        for (j = i + 1; j < num; j++) {
            if (arr[key] > arr[j]) {
                key = j;
            }
        }
        // Swap outside inner loop
        temp = arr[i];
        arr[i] = arr[key];
        arr[key] = temp;
    }

    printf("Maximum is %d\n", arr[num - 1]);
    printf("Minimum is %d\n", arr[0]);
}
