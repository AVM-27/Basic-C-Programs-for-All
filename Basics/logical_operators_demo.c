/*
 * Filename    : conditionals/logical_operators_demo.c
 * Description : Demonstrates logical AND (&&), OR (||), and NOT (!)
 *               operators, with basic I/O and variable usage.
 * Category    : Basics, Conditionals
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * (no input required)
 *
 * Sample Output:
 * Original numbers are: num1=6, num2=5
 * Intermediate results: (num1 < num2) is 0, (num1 > num2) is 1
 *
 * --- Logical AND (&&) ---
 * 0 && 1 : 0
 *
 * --- Logical OR (||) ---
 * 0 || 1 : 1
 *
 * --- Logical NOT (!) ---
 * NOT (0) : 1
 * NOT (1) : 0
 */

#include <stdio.h>

int main() {
    int num1 = 6, num2 = 5;

    int lt = (num1 < num2);
    int gt = (num1 > num2);

    printf("Original numbers are: num1=%d, num2=%d\n", num1, num2);
    printf("Intermediate results: (num1 < num2) is %d, (num1 > num2) is %d\n\n", lt, gt);

    printf("--- Logical AND (&&) ---\n");
    printf("%d && %d : %d\n", lt, gt, (lt && gt));

    printf("\n--- Logical OR (||) ---\n");
    printf("%d || %d : %d\n", lt, gt, (lt || gt));

    printf("\n--- Logical NOT (!) ---\n");
    printf("NOT (%d) : %d\n", lt, !lt);
    printf("NOT (%d) : %d\n", gt, !gt);

    return 0;
}
