/*
 * Filename    : Functions/ArmstrongNumberCheck.c
 * Description : Checks whether a given number is an Armstrong number or not.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Concept:
 *  - Armstrong number (also called Narcissistic number) is a number that is equal to
 *    the sum of its own digits each raised to the power of the number of digits.
 *  - For example, 153 is an Armstrong number because:
 *    1^3 + 5^3 + 3^3 = 153
 *
 * Functionality:
 *  - The program asks the user to enter an integer number.
 *  - It calculates the number of digits in the input number.
 *  - It calculates the sum of each digit raised to the power of the total digits.
 *  - Compares the sum to the original number to check if it is Armstrong.
 *  - Prints the result to the user.
 *
 * Input:
 *  - A single positive integer number.
 *
 * Output:
 *  - Message indicating whether the number is Armstrong or not.
 *
 * Important Notes:
 *  - Uses `pow()` function from math.h to raise digits to a power.
 *  - The number of digits is calculated by dividing the number repeatedly by 10.
 *  - Works for positive integers.
 *
 * Sample Input/Output:
 *  Enter a number: 153
 *  153 is an Armstrong number.
 *
 *  Enter a number: 123
 *  123 is not an Armstrong number.
 */

#include <stdio.h>
#include <math.h>

// Function prototype: checks if number is Armstrong
int isArmstrongNumber(int number);

int main() {
    int number;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function and print appropriate message
    if (isArmstrongNumber(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

// Function to check if a number is Armstrong
int isArmstrongNumber(int number) {
    int originalNumber = number;
    int remainder, result = 0, n = 0;

    // Calculate the number of digits (n)
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    // Reset originalNumber to the input value
    originalNumber = number;

    // Calculate sum of digits raised to nth power
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);  // pow(base, exponent) from math.h
        originalNumber /= 10;
    }

    // Compare sum to original number
    if (result == number)
        return 1;  // True: Armstrong number
    else
        return 0;  // False: Not Armstrong
}
