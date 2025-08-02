/*
 * Filename    : Strings/isalnum.c
 * Description : Demonstrates the use of character classification functions isalnum(), isalpha(), and isdigit() from <ctype.h>.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Checks whether given characters are alphanumeric, alphabetic, or digits.
 *  - Uses `isalnum()`, `isalpha()`, and `isdigit()` functions.
 *  - Prints appropriate messages for each test.
 *
 * Input:
 *  - No user input; the characters are hardcoded.
 *
 * Output:
 *  - Prints which characters are alphanumeric, alphabetic, or digits.
 *
 * Notes for Students:
 *  - `isalnum(int c)` returns non-zero if `c` is alphabetic or numeric.
 *  - `isalpha(int c)` checks if `c` is alphabetic only.
 *  - `isdigit(int c)` checks if `c` is a digit (0-9).
 *  - Useful for input validation or parsing tasks.
 *
 * Sample Output:
 *  var1=|d| is alphanumeric
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    int var1 = 'd', var2 = '2', var3 = '\t';

    if (isalnum(var1)) {
        printf("var1=|%c| is alphanumeric\n", var1);
    }
    if (isalpha(var2)) {
        printf("var2=|%c| is alphabetic\n", var2);
    }
    if (isdigit(var3)) {
        printf("var3=|%c| is a digit\n", var3);
    }

    return 0;
}
