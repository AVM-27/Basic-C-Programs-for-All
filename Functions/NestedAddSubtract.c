/*
 * Filename    : Functions/NestedAddSubtract.c
 * Description : Demonstrates nested function calls by performing addition and subtraction.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Concept:
 *  - Shows how functions can call other functions (nested calls).
 *  - Explains passing arguments (parameters) to functions.
 *  - Illustrates how one function can perform multiple tasks by calling others.
 *
 * Functionality:
 *  - The program asks the user to input two integers.
 *  - The `addition` function is called with these two numbers.
 *  - Inside the `addition` function:
 *      • It calculates the sum of the two numbers.
 *      • It calls the `subtraction` function to find their difference.
 *      • It prints the difference.
 *      • It returns the sum back to `main`.
 *  - The `main` function prints the sum.
 *
 * Input:
 *  - Two integers provided by the user.
 *
 * Output:
 *  - The difference between the two numbers (printed inside `addition`).
 *  - The sum of the two numbers (printed inside `main`).
 *
 * Important Notes:
 *  - Functions help organize code into reusable blocks.
 *  - Nested function calls let you break down complex problems.
 *  - Passing parameters by value means functions receive copies, not the originals.
 *
 * Sample Input/Output:
 *  Enter the numbers you want to add and subtract
 *  10 7
 *  The difference between both numbers is 3
 *  The sum of both numbers is 17
 */

#include <stdio.h>

// Function declarations
int addition(int num1, int num2);
int subtraction(int num1, int num2);

int main() {
    int num1, num2, sum;

    // Prompt user to enter two numbers
    printf("Enter the numbers you want to add and subtract\n");
    scanf("%d%d", &num1, &num2);

    // Call addition function which also calls subtraction internally
    sum = addition(num1, num2);

    // Print the sum in main
    printf("The sum of both numbers is %d\n", sum);

    return 0;
}

// Adds two numbers and calls subtraction function to print difference
int addition(int num1, int num2) {
    int sum = num1 + num2;

    // Call subtraction function and store difference
    int subtract = subtraction(num1, num2);

    // Print the difference inside addition function
    printf("The difference between both numbers is %d\n", subtract);

    return sum;
}

// Returns the difference of two numbers
int subtraction(int num1, int num2) {
    return num1 - num2;
}
