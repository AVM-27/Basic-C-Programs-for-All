/*
 * Filename    : Functions/AverageOfArray.c
 * Description : Calculates the average of user-entered floating-point numbers using a function.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Asks the user how many numbers they want to input.
 *  - Reads that many floating-point numbers into an array.
 *  - Calls a function to calculate the average of these numbers.
 *  - Prints the average rounded to two decimal places.
 *
 * Input:
 *  - An integer n specifying how many numbers to enter.
 *  - n floating-point numbers (ages or any decimal numbers).
 *
 * Output:
 *  - The average (mean) of the input numbers printed with 2 decimals.
 *
 * Important Concepts:
 *  - Arrays: used to store multiple values.
 *  - Functions: to organize code, here used to calculate average.
 *  - Floating-point numbers: numbers with decimals.
 *  - Looping: to iterate through the array elements.
 *
 * Sample Input/Output:
 * Example:
 * How many elements do you want to enter
 * 5
 * Enter the elements
 * 10.5 20 30 40 50
 * The average of the numbers provided is 30.10
 */

#include <stdio.h>

// Function prototype: calculates average of float array elements
float average(float age[], int n);

int main() {
    int n, i;

    // Ask user for number of elements
    printf("How many elements do you want to enter\n");
    scanf("%d", &n);

    float age[n];  // Variable Length Array to store n float numbers
    float avg;     // Variable to hold the average result

    // Prompt user to enter all elements
    printf("Enter the elements\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &age[i]);
    }

    // Call the function to calculate average
    avg = average(age, n);

    // Print the average formatted to 2 decimal places
    printf("The average of the numbers provided is %.2f\n", avg);

    return 0;
}

/*
 * Function: average
 * -----------------
 * Calculates the average of an array of floats.
 *
 * Parameters:
 *  - age[]: array of floats containing numbers
 *  - n: number of elements in the array
 *
 * Returns:
 *  - The average (sum of elements divided by n)
 */
float average(float age[], int n) {
    float sum = 0;  // To hold the sum of all elements

    // Loop through each element and add it to sum
    for (int i = 0; i < n; i++) {
        sum += age[i];
    }

    // Calculate average by dividing sum by number of elements
    return sum / n;
}
