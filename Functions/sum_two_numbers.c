/*
 * Filename    : Functions/sum_two_numbers.c
 * Description : Takes two integers as input and returns their sum using a function.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Reads two integers from the user.
 *  - Calls a function to compute their sum.
 *  - Prints the result.
 *
 * Sample Input:
 * 5 7
 *
 * Sample Output:
 * Sum of 5 and 7 is 12
 */

#include <stdio.h>

// Function that returns the sum of two integers
int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2, ans;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    ans = sum(num1, num2);

    printf("Sum of %d and %d is %d\n", num1, num2, ans);

    return 0;
}
