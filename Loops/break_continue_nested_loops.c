/*
 * Filename    : Loops/break_continue_nested_loops.c
 * Description : Demonstrates the use of `continue` statements within nested loops.
 *               Only specific pairs of (i, j) that meet the given condition are printed.
 *               Conditions:
 *                  - If j > 4 → skip current iteration of inner loop
 *                  - If i > 6 → skip current iteration of outer loop
 *
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - The outer loop (i) runs from 0 to 12 in steps of 3 (i.e., 0, 3, 6, 9, 12).
 *  - The inner loop (j) runs from 0 to 8 in steps of 2 (i.e., 0, 2, 4, 6, 8).
 *  - If j > 4, the inner loop skips printing that value.
 *  - If i > 6, the outer loop skips the entire remaining inner loop iterations.
 *  - Only values where i <= 6 and j <= 4 are printed.
 *
 * Sample Output:
 * ----------------------------
 * 0       0
 * 0       2
 * 0       4
 * 3       0
 * 3       2
 * 3       4
 * 6       0
 * 6       2
 * 6       4
 * ----------------------------
 */

#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 15; i += 3) {
        for (j = 0; j < 10; j += 2) {

            // Skip values where j > 4
            if (j > 4)
                continue;

            // Skip values where i > 6
            if (i > 6)
                continue;

            // Print i and j if both conditions above are not met
            printf("%d\t%d\n", i, j);
        }
    }

    return 0;
}
