/*
 * Filename    : pointers/ptrfunc.c
 * Description : 
 *   Swaps two integers using pointers.
 *   Demonstrates how function arguments passed by address allow
 *   the function to modify the original variables.
 *
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * 7 5
 */

#include <stdio.h>

// Function to exchange values of two integers via pointers
void exchange(int *px, int *py) {
    int temp;
    temp = *px;   // Store value pointed to by px
    *px = *py;    // Assign value pointed to by py to px
    *py = temp;   // Assign original px value to py
}

int main() {
    int a = 5;
    int b = 7;

    // Swap values of a and b using their addresses
    exchange(&a, &b);

    // Print swapped values
    printf("%d %d\n", a, b);

    return 0;
}
