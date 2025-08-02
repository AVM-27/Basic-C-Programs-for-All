/*
 * Filename    : pointers/pointer_arithmetic.c
 * Description : Demonstrates pointer arithmetic on float arrays.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * 3
 * Address of pointer 1 is 6422280 and Address of pointer 2 is 6422292
 */

#include <stdio.h>

int main() {
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];         // points to first element
    float *ptr2 = ptr1 + 3;        // points to 4th element

    // Difference in positions (i.e., number of elements between)
    printf("%ld\n", ptr2 - ptr1);  

    // Printing memory addresses using %p
    printf("Address of pointer 1 is %p and Address of pointer 2 is %p\n", (void*)ptr1, (void*)ptr2);

    return 0;
}
