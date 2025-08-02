/*
 * Filename    : recursion/recursive_fibonacci.c
 * Description : Computes the nth Fibonacci number using recursion.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Asks the user for a number.
 *  - Computes the nth Fibonacci number using a recursive function.
 *  - Prints only the nth Fibonacci number (not the full series).
 *
 * Sample Output:
 * Enter the number whose series you want to generate
 * 6
 * The Fibonacci number is
 * 8
 */

#include <stdio.h>

// Function prototype
int Fibonacci(int num);

int main() {
    int num, ans;

    // User input
    printf("Enter the number whose series you want to generate\n");
    scanf("%d", &num);

    // Recursive function call
    ans = Fibonacci(num);

    // Output result
    printf("The Fibonacci number is\n");
    printf("%d\n", ans);

    return 0;
}

// Recursive Fibonacci function
int Fibonacci(int num) {
    if (num <= 1) {
        return num;
    }
    return Fibonacci(num - 1) + Fibonacci(num - 2);
}
