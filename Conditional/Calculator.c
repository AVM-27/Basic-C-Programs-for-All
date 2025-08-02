/*
 * File: ifelseifcalculator.c
 * --------------------------
 * Note: This program acts as a simple calculator using an if-else-if ladder
 * to perform an operation based on the user's menu choice. Division by zero
 * is not handled here but is a good topic for discussion.
 */
#include <stdio.h> // Include standard I/O library.

int main() {
    // Declare variables for the two numbers, user's choice, and the answer.
    int n1, n2, choice, ans;

    // Get the two numbers from the user.
    printf("Enter the two numbers you want to operate on:\n");
    scanf("%d %d", &n1, &n2);

    // Display the menu of options.
    printf("\n--- MENU ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Use an if-else-if ladder to determine which operation to perform.
    if (choice == 1) {
        ans = n1 + n2;
        printf("Result: %d + %d = %d\n", n1, n2, ans);
    } else if (choice == 2) {
        ans = n1 - n2;
        printf("Result: %d - %d = %d\n", n1, n2, ans);
    } else if (choice == 3) {
        ans = n1 * n2;
        printf("Result: %d * %d = %d\n", n1, n2, ans);
    } else if (choice == 4) {
        // It's good practice to check for division by zero.
        if (n2 != 0) {
            ans = n1 / n2;
            printf("Result: %d / %d = %d\n", n1, n2, ans);
        } else {
            printf("Error: Cannot divide by zero.\n");
        }
    } else {
        // Handle invalid menu choices.
        printf("Invalid choice. Please run the program again.\n");
    }
    
    return 0; // Indicate successful execution.
}
