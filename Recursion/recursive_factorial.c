/*
 * Filename    : recursion/recursive_factorial.c
 * Description : Calculates the factorial of a number using recursion.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Takes an integer input from the user.
 *  - Computes the factorial of the number using a recursive function.
 *  - Prints the resulting factorial value.
 *
 * Sample Output:
 * Enter the number whose factorial you want to find
 * 5
 * The Factorial of 5 is 120
 */

#include <stdio.h>

// Recursive function to calculate factorial
int Factorial(int n) {
    if (n == 0) {
        return 1;  // Base case: 0! = 1
    } else {
        return n * Factorial(n - 1);  // Recursive call
    }
}

int main() {
    int n;

    // User input
    printf("Enter the number whose factorial you want to find\n");
    scanf("%d", &n);

    // Output result
    printf("The Factorial of %d is %d\n", n, Factorial(n));

    return 0;
}
