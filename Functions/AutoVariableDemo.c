/*
 * Filename    : Functions/AutoVariableDemo.c
 * Description : Demonstrates the use of the 'auto' storage class in C.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * 📌 Program Overview:
 *  - Accepts a lower and upper bound from the user.
 *  - Computes the sum of all integers in the range [lower, upper) using a function.
 *  - The function uses the `auto` storage class explicitly (even though it is implicit by default).
 *
 * 📘 Key Concepts:
 *  - `auto` is the default storage class for local variables inside functions.
 *  - The use of `auto` is optional and mostly obsolete, but shown here for educational clarity.
 *  - Demonstrates how to define and call a simple function with parameters and a return value.
 *
 * 🧾 Input:
 *  - Two integers (lower and upper bounds for the range).
 *
 * 🖨️ Output:
 *  - The sum of all integers from the lower bound up to (but not including) the upper bound.
 *
 * 💡 Important Notes for Students:
 *  - The `auto` keyword tells the compiler to store the variable in memory automatically (this is the default).
 *  - Variables declared with `auto` cannot be accessed outside their scope (i.e., function or block).
 *  - Using functions helps break your program into logical parts.
 *
 * 🔢 Sample Input/Output:
 *
 *  Example 1:
 *    Input :
 *      Enter lower and upper bounds:
 *      1 5
 *    Output:
 *      The sum from 1 to 5 (exclusive) is: 10
 *
 *  Example 2:
 *    Input :
 *      Enter lower and upper bounds:
 *      3 8
 *    Output:
 *      The sum from 3 to 8 (exclusive) is: 25
 */

#include <stdio.h>

// Function to calculate the sum of a range using 'auto' variables
int sum_range(int lo, int hi) {
    auto int i;              // Declared with 'auto' keyword (optional)
    auto int sum = 0;        // 'sum' will store the result

    for(i = lo; i < hi; i++) {
        sum += i;            // Add current value of i to sum
    }

    return sum;              // Return the final result
}

int main() {
    int lo, high;

    // Ask user for lower and upper bounds
    printf("Enter lower and upper bounds:\n");
    scanf("%d %d", &lo, &high);

    // Call function and store result in 'sum'
    int sum = sum_range(lo, high);

    // Display the result
    printf("The sum from %d to %d (exclusive) is: %d\n", lo, high, sum);

    return 0;
}
