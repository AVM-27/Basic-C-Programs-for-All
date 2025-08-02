/*
 * Filename    : functions/nested_ratio_difference.c
 * Description : Demonstrates nested function calls by computing a ratio only if the difference between two values is non-zero.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Accepts three integers from the user.
 *  - Computes the ratio `x / (y - z)` using a helper function to ensure denominator is non-zero.
 *  - Uses a nested call: `ratio()` calls `difference()`.
 *
 * Sample Output:
 * Enter the numbers
 * 10 5 2
 * Their ratio is
 * 3.333333
 */

#include <stdio.h>

float ratio(int x, int y, int z);
int difference(int x, int y);

int main() {
    int a, b, c;

    printf("Enter the numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Their ratio is\n");
    printf("%f\n", ratio(a, b, c));

    return 0;
}

// Computes x / (y - z) only if y != z
float ratio(int x, int y, int z) {
    if (difference(y, z)) {
        return (float)x / (y - z);  // Cast to float for decimal output
    } else {
        return 0.0;
    }
}

// Returns 1 if the numbers are different, 0 otherwise
int difference(int p, int q) {
    return (p != q);
}
