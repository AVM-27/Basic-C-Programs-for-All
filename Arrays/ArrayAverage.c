/*
 * Filename    : Arrays/ArrayAverage.c
 * Description : Calculate the average of elements in a float array using a separate function.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * 📌 Program Overview:
 *  - Asks the user how many floating-point numbers they want to enter.
 *  - Accepts those numbers and stores them in an array.
 *  - Uses a user-defined function `average()` to compute the average of those elements.
 *  - Displays the final average rounded to two decimal places.
 *
 * 🧠 Concepts Covered:
 *  - Variable Length Arrays (VLAs)
 *  - Function definition and calling
 *  - Passing arrays to functions
 *  - Looping constructs (for loop)
 *  - Floating point input/output formatting
 *
 * 🧾 Input:
 *  - An integer `n` specifying how many numbers the user will enter.
 *  - `n` float values separated by spaces or newlines.
 *
 * 🖨️ Output:
 *  - The calculated average of the input numbers.
 *
 * 📘 Notes for Students:
 *  - An array is a collection of elements of the same type stored in contiguous memory.
 *  - `float sum = 0;` initializes the total to zero before summing elements.
 *  - `%f` is the format specifier for floats in C. Use `%.2f` for 2 decimal precision.
 *  - Functions help divide large tasks into smaller, manageable blocks.
 *
 * 🔎 Sample Input/Output:
 *  Example 1:
 *    Input :
 *      How many elements do you want to enter?
 *      4
 *      Enter the elements:
 *      2.0 4.0 6.0 8.0
 *    Output:
 *      The average of the numbers provided is: 5.00
 *
 *  Example 2:
 *    Input :
 *      How many elements do you want to enter?
 *      3
 *      Enter the elements:
 *      10 20 30
 *    Output:
 *      The average of the numbers provided is: 20.00
 */

#include <stdio.h>

// Function to calculate the average of an array
float average(float age[], int n);

int main()
{
    int n;

    // Ask the user how many numbers they want to input
    printf("How many elements do you want to enter?\n");
    scanf("%d", &n);

    float age[n];   // Declare a Variable Length Array of size 'n'

    // Prompt the user to enter 'n' float values
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &age[i]);
    }

    // Call the function and store the result
    float avg = average(age, n);

    // Display the average with 2 decimal places
    printf("The average of the numbers provided is: %.2f\n", avg);

    return 0;
}

// Function definition to calculate average of float array
float average(float age[], int n)
{
    float sum = 0;

    // Sum up all elements in the array
    for (int i = 0; i < n; i++)
    {
        sum += age[i];
    }

    // Return the average
    return sum / n;
}
