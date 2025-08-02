/*
 * Filename    : pointers/pointer_array_addresses.c
 * Description : 
 *   This program accepts an integer array from the user (using Variable Length Arrays)
 *   and prints the memory addresses of each element using pointer notation. 
 *   It helps demonstrate how arrays are stored in contiguous memory and shows
 *   how to access the address of individual elements using pointers.
 *
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * What is the size of the array?
 * 4
 * Enter the elements
 * 10 20 30 40
 *
 * Sample Output:
 * The addresses where your array is stored are:
 * 0x7ffdb8d87a10 0x7ffdb8d87a14 0x7ffdb8d87a18 0x7ffdb8d87a1c
 */

#include <stdio.h>

int main() {
    int size;

    // Prompt user to enter size of array
    printf("What is the size of the array?\n");
    scanf("%d", &size);

    // Declare a Variable Length Array (VLA)
    int x[size];

    // Prompt to enter array elements
    printf("Enter the elements\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &x[i]);
    }

    // Display addresses of each element in the array
    printf("The addresses where your array is stored are:\n");
    for (int i = 0; i < size; i++) {
        // Cast to void* to properly print address using %p
        printf("%p ", (void*)&x[i]);
    }

    printf("\n");  // For clean output formatting
    return 0;
}
