/*
 * Filename    : Functions/simple_sum.c
 * Description : Reads two integers from the user and prints their sum using a function.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Takes two integers as input.
 *  - Uses a function `sum()` to compute their sum.
 *  - Displays the result.
 *
 * Sample Input:
 * 12 8
 *
 * Sample Output:
 * Sum of 12 and 8 is 20
 */

#include <stdio.h>

// Function to calculate the sum of two integers
int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2, ans;

    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);

    ans = sum(num1, num2);  // Correct function call

    printf("Sum of %d and %d is %d\n", num1, num2, ans);

    return 0;
}
