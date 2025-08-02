/*
 * Filename    : Strings/fgets.c
 * Description : Demonstrates the use of fgets() for reading strings safely.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Reads a string input from the user using fgets().
 *  - Limits input length to avoid buffer overflow.
 *  - Prints the entered string using puts().
 *
 * Input:
 *  - User inputs their favorite food (max 4 characters + null terminator).
 *
 * Output:
 *  - Prints the entered favorite food.
 *
 * Notes for Students:
 *  - fgets() reads at most `size-1` characters, leaving room for the null terminator.
 *  - fgets() includes the newline character if space permits.
 *  - Safer than gets(), which can cause buffer overflows.
 *
 * Sample Input/Output:
 *  Enter your favorite food: pizza
 *  Your favorite food is pizza
 */

#include <stdio.h>

int main() {
    char food[5];
    printf("Enter your favorite food: ");
    fgets(food, sizeof(food), stdin);
    printf("Your favorite food is ");
    puts(food);

    return 0;
}
