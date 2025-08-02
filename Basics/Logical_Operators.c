/*
 * File: logical_operators.c
 * -------------------------
 * Note: This program demonstrates the logical AND (&&), OR (||), and NOT (!)
 * operators, which are used to combine or invert boolean (true/false) expressions.
 */
#include <stdio.h> // Include standard I/O library.

int main() {
    // Initialize variables.
    int num1 = 6, num2 = 5;

    // Pre-calculate some relational expressions to see the intermediate results.
    int lt = (num1 < num2);  // This will be 0 (false).
    int gt = (num1 > num2);  // This will be 1 (true).

    printf("Original numbers are: num1=%d, num2=%d\n", num1, num2);
    printf("Intermediate results: (num1 < num2) is %d, (num1 > num2) is %d\n\n", lt, gt);

    // --- Logical AND (&&) ---
    // Returns 1 only if BOTH operands are true (non-zero).
    printf("--- Logical AND (&&) ---\n");
    printf("%d && %d : %d\n", lt, gt, (lt && gt)); // 0 && 1 -> 0 (false)

    // --- Logical OR (||) ---
    // Returns 1 if AT LEAST ONE operand is true (non-zero).
    printf("\n--- Logical OR (||) ---\n");
    printf("%d || %d : %d\n", lt, gt, (lt || gt)); // 0 || 1 -> 1 (true)

    // --- Logical NOT (!) ---
    // Inverts the boolean value of its operand.
    printf("\n--- Logical NOT (!) ---\n");
    printf("NOT (%d) : %d\n", lt, !lt); // !(0) -> 1 (true)
    printf("NOT (%d) : %d\n", gt, !gt); // !(1) -> 0 (false)

    return 0; // Indicate successful execution.
}
