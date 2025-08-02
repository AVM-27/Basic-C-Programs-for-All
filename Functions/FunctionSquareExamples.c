/*
 * Filename    : Functions/FunctionSquareExamples.c
 * Description : Demonstrates different ways to calculate square of a number using functions
 *               with and without parameters and return values.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - The program calculates the square of a number entered by the user.
 *  - Four functions show different ways of using parameters and return values:
 *    1) Function with parameters and return value.
 *    2) Function with parameters but no return (void).
 *    3) Function without parameters but with return value.
 *    4) Function without parameters and no return (void).
 *  - Demonstrates function calls with different styles.
 *
 * Input:
 *  - Integer(s) entered by the user.
 *
 * Output:
 *  - Square(s) of the input number(s).
 *
 * Sample Input/Output:
 * Enter the number whose square you want to find?
 * 5
 * The square of 5 is 25, 36
 * Enter the number again
 * 6
 * The square of 6 obtained without input is 25
 * Enter the number again
 * 5
 * The square of 5 is 25, obtained without input and return
 */

#include <stdio.h>
#include <math.h>  // For pow() function

// Function prototypes
int sqr1(int num);
void sqr2(int num);
int sqr3(void);
void sqr4(void);

int main() {
    int num1;

    // Prompt user to enter a number
    printf("Enter the number whose square you want to find?\n");
    scanf("%d", &num1);

    // Calling function with parameter and return value
    int result1 = sqr1(num1);

    // Calling function without parameters but with return value
    int result3 = sqr3();

    printf("The square of %d is %d, %d\n", num1, result1, result3);

    // Calling function with parameters but no return value
    sqr2(num1);

    // Calling function without parameters and no return value
    sqr4();

    return 0;
}

/*
 * Function: sqr1
 * -----------------
 * Calculates square using a parameter and returns the result.
 * 
 * num: input integer to be squared
 *
 * returns: square of num
 */
int sqr1(int num) {
    // pow returns double, so cast to int
    return (int)pow(num, 2);
}

/*
 * Function: sqr2
 * -----------------
 * Calculates square using a parameter and prints the result directly.
 * No return value.
 *
 * num: input integer to be squared
 */
void sqr2(int num) {
    int result = (int)pow(num, 2);
    printf("The square of %d obtained with input parameter is %d\n", num, result);
}

/*
 * Function: sqr3
 * -----------------
 * Asks user for input inside the function, calculates square, and returns it.
 *
 * returns: square of user input
 */
int sqr3(void) {
    int num;
    printf("Enter the number again\n");
    scanf("%d", &num);
    return (int)pow(num, 2);
}

/*
 * Function: sqr4
 * -----------------
 * Asks user for input inside the function, calculates square,
 * and prints the result directly without returning.
 */
void sqr4(void) {
    int num;
    printf("Enter the number again\n");
    scanf("%d", &num);
    int result = (int)pow(num, 2);
    printf("The square of %d is %d, obtained without input and return\n", num, result);
}
