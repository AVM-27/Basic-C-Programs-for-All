/*
 * Filename    : Functions/StaticVariableDemo.c
 * Description : Demonstrates the difference between automatic (local) and static variables in C.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * 📌 Program Overview:
 *  - Prints numbers using an automatic variable in `main()`.
 *  - Then prints numbers using a static variable in the `static_n()` function.
 *  - Shows how automatic variables are re-initialized every time,
 *    while static variables retain their values across function calls.
 *
 * 📘 Key Concepts:
 *  - Automatic variables (declared with or without `auto`) are re-initialized each time their block runs.
 *  - Static variables retain their values between function calls.
 *  - Static variables are initialized only once, and their lifetime spans the entire program.
 *
 * 🖨️ Output:
 *  - Two lines:
 *      - One from `main()` showing `1 1 1 1 1 1` (auto variable).
 *      - One from `static_n()` showing `1 2 3 4 5 6` (static variable).
 *
 * 💡 Important Notes for Students:
 *  - `int n = 0;` inside `main()` is re-created for each loop iteration.
 *  - `static int m = 0;` in `static_n()` retains its updated value across loop iterations and function calls.
 *  - Static variables are useful when you want a variable to "remember" its state.
 *
 * 🔢 Sample Output:
 *
 *    main
 *    1 1 1 1 1 1 
 *    function
 *    1 2 3 4 5 6
 */

#include <stdio.h>

// Function that demonstrates static variable behavior
void static_n();

int main() {
    int i;

    printf("main\n");

    // Automatic variable demo — resets on each iteration
    for(i = 0; i <= 5; i++) {
        int n = 0;             // Auto (local) variable: resets each time
        printf("%d ", ++n);    // Always prints 1
    }

    printf("\n");

    // Call the function that uses a static variable
    static_n();

    return 0;
}

// Function to demonstrate static variable behavior
void static_n() {
    int i;

    printf("function\n");

    for (i = 0; i <= 5; ++i) {
        static int m = 0;       // Static variable: retains its value across iterations
        printf("%d ", ++m);     // Increments and retains value
    }
}
