/*
 * Filename    : pointers/pointer_arithmetic_demo.c
 * Description : Demonstrates pointer arithmetic using initialized pointers on an integer array.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 * - Uses two pointers `p1` and `p2` to navigate through an integer array using arithmetic operations.
 * - Demonstrates pointer incrementing, addition, and subtraction.
 *
 * Sample Output:
 * p1 = 0x7ffee4a6f860, *p1 = 20
 * p2 = 0x7ffee4a6f868, *p2 = 40
 * After arithmetic:
 * p1 = 0x7ffee4a6f860, *p1 = 20
 * p2 = 0x7ffee4a6f860, *p2 = 20
 */

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p1, *p2;
    int i = 1, j = 2;

    p1 = &arr[0];         // Point to the first element
    p1 = p1 + 1;          // Now points to arr[1] (20)
    p2 = p1 + j;          // p2 points to arr[3] (40)

    printf("p1 = %p, *p1 = %d\n", (void *)p1, *p1);
    printf("p2 = %p, *p2 = %d\n", (void *)p2, *p2);

    p2++;                 // p2 now points to arr[4] (50)
    p2 = p2 - (i + j);    // p2 moves back by 3 → points to arr[1] (20)

    printf("After arithmetic:\n");
    printf("p1 = %p, *p1 = %d\n", (void *)p1, *p1);
    printf("p2 = %p, *p2 = %d\n", (void *)p2, *p2);

    return 0;
}
