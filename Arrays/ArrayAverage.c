/*
 * Filename    : Arrays/ArrayAverage.c
 * Description : Calculate the average of elements in a float array using a function.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 */

#include <stdio.h>

// Function to calculate average
float average(float age[], int n);

int main()
{
    int n, i;
    printf("How many elements do you want to enter?\n");
    scanf("%d", &n);

    float age[n];   // Variable Length Array
    float avg;

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &age[i]);
    }

    avg = average(age, n);  // function being called here
    printf("The average of the numbers provided is: %.2f\n", avg);

    return 0;
}

// Function definition
float average(float age[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += age[i];
    }
    return sum / n;
}
