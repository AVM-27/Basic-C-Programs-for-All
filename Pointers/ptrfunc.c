/*
 * Filename    : pointers/ptrfunc.c
 * Description : Swaps two integers using pointers.
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
    temp = *px;
    *px = *py;
    *py = temp;
}

int main() {
    int a = 5;
    int b = 7;

    exchange(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}
