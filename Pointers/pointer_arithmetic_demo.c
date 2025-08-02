/*
 * Filename    : pointers/pointer_arithmetic_demo.c
 * Description : Demonstrates pointer arithmetic using initialized pointers.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 */

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p1, *p2;
    int i = 1, j = 2;

    p1 = &arr[0];         // Pointing to the first element
    p1 = p1 + 1;          // Now points to arr[1]
    p2 = p1 + j;          // p2 points to arr[1 + 2] = arr[3]

    printf("p1 = %p, *p1 = %d\n", (void *)p1, *p1);
    printf("p2 = %p, *p2 = %d\n", (void *)p2, *p2);

    p2++;                 // Now p2 points to arr[4]
    p2 = p2 - (i + j);    // p2 moves back by i + j = 3 → arr[1]

    printf("After arithmetic:\n");
    printf("p1 = %p, *p1 = %d\n", (void *)p1, *p1);
    printf("p2 = %p, *p2 = %d\n", (void *)p2, *p2);

    return 0;
}
