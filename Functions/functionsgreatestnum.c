/*
 * Filename    : Functions/functionsgreatestnum.c
 * Description : Reads three integers from the user and returns the greatest number using a function.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Prompts the user to input three numbers.
 *  - Uses a function `greatest` to determine the largest of the three.
 *  - Prints the greatest number.
 *
 * Sample Input:
 * Enter the three numbers
 * 12 45 23
 *
 * Sample Output:
 * The greatest number is 45
 */

#include <stdio.h>

// Function prototype
int greatest(int a, int b, int c);

int main() {
    int a, b, c;
    
    printf("Enter the three numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    // Call the function with user input and store the result
    int result = greatest(a, b, c);

    // Print the greatest number
    printf("The greatest number is %d\n", result);

    return 0;
}

/*
 * Function: greatest
 * ------------------
 * Returns the greatest of three integers.
 *
 * a, b, c: integers to compare
 *
 * returns: greatest integer among a, b, and c
 */
int greatest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
