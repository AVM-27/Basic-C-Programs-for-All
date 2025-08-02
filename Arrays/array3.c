/*
 * Filename    : Arrays/array3.c
 * Description : Demonstrates the use of logical AND (&&) operator with short-circuit evaluation
 *               and the interaction with the printf() function in C.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Details:
 *  - Initializes two integer variables x and y.
 *  - Uses a boolean variable 'res' to store the result of the logical expression:
 *      (x != y) && printf("Hello\n")
 *    This expression uses short-circuit evaluation.
 *  - Since x != y is true, printf("Hello\n") is executed, printing "Hello" to the console.
 *  - The value of 'res' is then printed as an integer (1 for true, 0 for false).
 *
 * Key Concepts:
 *  - Logical AND (&&) operator short-circuits: if the first operand is false, second is not evaluated.
 *  - printf() returns the number of characters printed, which in C is a positive integer (treated as true).
 *  - Using logical operators with functions can lead to conditional execution.
 *
 * Sample Output:
 *  Hello
 *  1
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x = 10, y = 4;
    bool res = ((x != y) && printf("Hello\n"));
    printf("%d", res);

    return 0;
}
