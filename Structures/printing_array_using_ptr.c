/*
 * Filename    : arrays/printing_array_using_ptr.c
 * Description : Reads an array from user input and prints the elements using pointer arithmetic.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * Enter the size
 * 5
 * Enter the elements
 * 10 20 30 40 50
 *
 * Sample Output:
 * 10 20 30 40 50
 */

#include <stdio.h>

// Function to print array elements using pointer arithmetic
void printArray(int *Array, int length) {
    for (int index = 0; index < length; index++) {
        printf("%d ", *(Array + index));
    }
    printf("\n");
}

int main() {
    int length;

    printf("Enter the size\n");
    scanf("%d", &length);

    int Array[length];

    printf("Enter the elements\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &Array[i]);
    }

    printArray(Array, length);

    return 0;
}
