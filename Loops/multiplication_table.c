/*
 * Filename    : Loops/multiplication_table.c
 * Description : Prints the multiplication table of a given number up to a specified count.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Details:
 *  - Prompts the user to enter a number.
 *  - Prompts the user to enter how big the multiplication table should be.
 *  - Prints the multiplication table from 0 up to the entered count.
 *
 * Input:
 *  - An integer number (num1).
 *  - An integer count specifying the size of the table.
 *
 * Output:
 *  - Multiplication table for the given number from 0 to count.
 *
 * Example:
 *  Enter the number whose multiplication table you want
 *  5
 *  How big do you want your table to be
 *  10
 *  5 x 0 = 0
 *  5 x 1 = 5
 *  5 x 2 = 10
 *  ...
 *  5 x 10 = 50
 */

#include <stdio.h>

int main() {
    int num1, count, mul, i;

    printf("Enter the number whose multiplication table you want\n");
    scanf("%d", &num1);

    printf("How big do you want your table to be\n");
    scanf("%d", &count);

    for (i = 0; i <= count; i++) {
        mul = num1 * i;
        printf("%d x %d = %d\n", num1, i, mul);
    }

    return 0;
}
