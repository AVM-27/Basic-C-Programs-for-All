/*
 * Filename    : Functions/functionsum.c
 * Description : Reads 'n' numbers from the user, sums them, and displays the result using a function.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Prompts user to input how many numbers to add.
 *  - Reads those numbers into an array.
 *  - Prints the numbers entered.
 *  - Calculates sum using a function and returns it.
 *  - Prints the sum.
 *
 * Sample Input:
 * How many numbers do you want to add?
 * 4
 * 2 4 6 8
 *
 * Sample Output:
 * Your numbers are
 * 2 4 6 8 
 * The sum of all the numbers is
 * 20
 */

#include <stdio.h>

// Function prototype
int numsum(int n);

int main() {
    int sum, n;

    printf("How many numbers do you want to add?\n");
    scanf("%d", &n);

    sum = numsum(n);

    printf("The sum of all the numbers is %d\n", sum);

    return 0;
}

/*
 * Function: numsum
 * -----------------
 * Calculates the sum of 'n' integers entered by the user.
 * 
 * n: number of elements to read
 *
 * returns: sum of the entered numbers
 */
int numsum(int n) {
    int i, sum = 0;
    int arr[n];

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Your numbers are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}
