/*
 * Filename    : recursion/recursive_inorder_print.c
 * Description : Demonstrates a recursive call structure where the function makes two recursive 
 *               calls and prints between them. Mimics in-order traversal style output.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * 0	1	2	3
 */

#include <stdio.h> // Include standard I/O library

// Function prototype
void fun(int x);

int main() {
    int x = 4;
    fun(x); // Start the recursive process
    return 0; // Indicate successful execution
}

void fun(int x) {
    if (x > 0) {
        fun(--x);           // First recursive call (left)
        printf("%d\t", x);  // Print after left recursion
        fun(--x);           // Second recursive call (right)
    }
}
