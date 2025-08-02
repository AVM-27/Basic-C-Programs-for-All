/*
 * Filename    : pointers/pointer_array_addresses.c
 * Description : Takes an array input from the user and prints the memory addresses of each element.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * What is the size of the array?
 * 4
 * Enter the elements
 * 10 20 30 40
 * The addresses where your array is stored are:
 * 6422032 6422036 6422040 6422044
 */

#include <stdio.h>

int main() {
    int size;
    printf("What is the size of the array?\n");
    scanf("%d", &size);

    int x[size];  // Variable Length Array (VLA)

    printf("Enter the elements\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &x[i]);
    }

    printf("The addresses where your array is stored are:\n");
    for (int i = 0; i < size; i++) {
        printf("%p ", (void*)&x[i]);  // Proper address format using %p
    }

    printf("\n");
    return 0;
}
