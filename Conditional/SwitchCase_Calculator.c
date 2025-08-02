/*
 * File: switchcalculator.c
 * ------------------------
 * Note: This program implements the same simple calculator as the previous
 * one, but uses a switch-case statement, which can be cleaner for handling
 * a fixed set of menu options.
 */
#include <stdio.h> // Include standard I/O library.

int main() {
    // Declare variables.
    int n1, n2, choice, ans;

    // Get user input for the numbers.
    printf("Enter the two numbers you want to operate on:\n");
    scanf("%d %d", &n1, &n2);

    // Display the menu.
    printf("\n--- MENU ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // The switch statement evaluates the 'choice' variable.
    switch (choice) {
        // The 'case' label checks for a specific value.
        case 1:
            ans = n1 + n2;
            printf("Result: %d + %d = %d\n", n1, n2, ans);
            break; // The 'break' statement exits the switch block.

        case 2:
            ans = n1 - n2;
            printf("Result: %d - %d = %d\n", n1, n2, ans);
            break;

        case 3:
            ans = n1 * n2;
            printf("Result: %d * %d = %d\n", n1, n2, ans);
            break;

        case 4:
            if (n2 != 0) {
                ans = n1 / n2;
                printf("Result: %d / %d = %d\n", n1, n2, ans);
            } else {
                printf("Error: Cannot divide by zero.\n");
            }
            break;

        // The 'default' case executes if 'choice' matches none of the above cases.
        default:
            printf("Invalid choice. Please run the program again.\n");
    }

    return 0; // Indicate successful execution.
}
