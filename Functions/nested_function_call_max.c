/*
 * Filename    : Functions/NestedFunctionCallMax.c
 * Description : Demonstrates nested function calls to find the maximum of three numbers using a simple max() function.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * 📌 Program Overview:
 *  - Defines a `max()` function that takes two integers and returns the greater one.
 *  - Uses nested function calls to determine the maximum among three numbers.
 *  - Demonstrates how nested function calls work and how the ternary operator is used.
 *
 * 🔍 Key Concepts for Students:
 *  - **Ternary Operator**: A compact form of `if-else` used as: `(condition) ? true_value : false_value`
 *  - **Nested Function Calls**: A function call used inside another function call.
 *  - **Modular Programming**: Breaking logic into functions makes code reusable and easier to read.
 *
 * 📥 Input:
 *  - No user input in this version. Values (4, 11, 6) are hardcoded.
 *
 * 🖨️ Output:
 *  - Prints the largest of the three values to the console.
 *
 * 🧠 How It Works:
 *  - Step 1: `max(11, 6)` is evaluated first and returns `11`.
 *  - Step 2: `max(4, 11)` is evaluated next, and the final result is `11`.
 *
 * 📌 Sample Output:
 *    11
 *
 * 💡 Suggested Enhancement:
 *  - Allow user input to test the function with different values.
 */

#include <stdio.h>

// Function to return the maximum of two integers
int max(int x, int y) {
    return (x > y) ? x : y;  // Ternary operator: returns the greater of x and y
}

int main() {
    int result;

    // Using nested max() calls to find the maximum of 3 numbers: 4, 11, 6
    result = max(4, max(11, 6));  // max(11, 6) = 11 → max(4, 11) = 11

    // Output the result
    printf("%d\n", result);  // Output: 11

    return 0;
}
