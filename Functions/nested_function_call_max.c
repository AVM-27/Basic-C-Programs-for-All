/*
 * Filename    : functions/nested_function_call_max.c
 * Description : Demonstrates nested function calls by using a max function to find the maximum of three numbers.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - A `max` function returns the larger of two integers using the ternary operator.
 *  - This function is used in a nested call to find the maximum of three numbers.
 *
 * Sample Output:
 * 11
 */

#include <stdio.h>

// Returns the greater of two integers
int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int m;

    // Nested function call to find max of 4, 11, and 6
    m = max(4, max(11, 6));  // max(4, 11) = 11 → m = 11

    // Output the result
    printf("%d\n", m);

    return 0;
}
