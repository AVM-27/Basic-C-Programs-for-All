/*
 * Filename    : Conditional/arithmeticops.c
 * Description : Performs basic arithmetic operations (+, -, *, %) on two integers.
 * Author      : Adarsh Venugopal
 * Date        : 2025-08-02
 *
 * Program Details:
 *  - Prompts the user to enter an arithmetic operator (+, -, *, %).
 *  - Accepts two integer operands from the user.
 *  - Performs the operation based on the operator entered.
 *  - Prints the result of the operation.
 *  - Handles invalid operator input with an error message.
 *
 * Input:
 *  - Operator character: '+', '-', '*', '%'
 *  - Two integers
 *
 * Output:
 *  - Result of the arithmetic operation.
 *
 * Sample Input:
 *  Enter an operator eg:(+, -, *, %)
 *  *
 *  Enter the numbers
 *  5 10
 *
 * Sample Output:
 *  The multiplication of both numbers 5 * 10 = 50
 */

#include <stdio.h>

int main()
{
    char operator1;
    int operand1, operand2;

    // Prompt user for arithmetic operator
    printf("Enter an operator eg:(+, -, *, %%):\n");
    scanf(" %c", &operator1);  // Note the space before %c to consume any leftover whitespace

    // Prompt user for operands
    printf("Enter the numbers:\n");
    scanf("%d %d", &operand1, &operand2);

    // Perform operation based on operator
    switch(operator1)
    {
        case '+':
            printf("The addition of the numbers %d + %d = %d\n", operand1, operand2, operand1 + operand2);
            break;

        case '-':
            printf("The subtraction of the numbers %d - %d = %d\n", operand1, operand2, operand1 - operand2);
            break;

        case '*':
            printf("The multiplication of both numbers %d * %d = %d\n", operand1, operand2, operand1 * operand2);
            break;

        case '%':
            // Handle division by zero error for modulo
            if (operand2 == 0) {
                printf("Error: Division by zero is undefined.\n");
            } else {
                printf("The modulo of both numbers %d %% %d = %d\n", operand1, operand2, operand1 % operand2);
            }
            break;

        default:
            printf("Error: Invalid operator entered. Please enter one of (+, -, *, %%).\n");
    }

    return 0;
}
