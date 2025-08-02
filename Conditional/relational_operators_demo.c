/*
 * Filename    : Conditional/relational_operators_demo.c
 * Description : This program demonstrates the use of all six relational
 *               operators in C. The result of a relational expression is
 *               either 1 (true) or 0 (false).
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * (no input required)
 *
 * Sample Output:
 * 1 means true whereas 0 means false
 * Is 5 < 6 ?  : 1
 * Is 5 <= 6 ? : 1
 * Is 5 > 6 ?  : 0
 * Is 5 >= 6 ? : 0
 * Is 5 == 6 ? : 0
 * Is 5 != 6 ? : 1
 */

#include <stdio.h> // Include standard I/O library

int main() {
    int num1 = 5, num2 = 6; // Values to compare

    printf("1 means true whereas 0 means false\n");

    // Evaluate and print results of relational operations
    printf("Is %d < %d ?  : %d\n", num1, num2, (num1 < num2));
    printf("Is %d <= %d ? : %d\n", num1, num2, (num1 <= num2));
    printf("Is %d > %d ?  : %d\n", num1, num2, (num1 > num2));
    printf("Is %d >= %d ? : %d\n", num1, num2, (num1 >= num2));
    printf("Is %d == %d ? : %d\n", num1, num2, (num1 == num2));
    printf("Is %d != %d ? : %d\n", num1, num2, (num1 != num2));

    return 0; // Successful execution
}
