/*
 * Filename    : Strings/isalnum_isalpha_isdigit.c
 * Description : Demonstrates usage of isalnum(), isalpha(), and isdigit() from <ctype.h>.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Checks if given characters are alphanumeric, alphabetic, or digits using standard library functions.
 *  - Uses three test characters: 'd', '2', and tab character '\t'.
 *  - Prints appropriate messages based on the classification of each character.
 *
 * Input:
 *  - No user input; predefined variables tested.
 *
 * Output:
 *  - Messages indicating if the variables are alphanumeric, alphabetic, or digits.
 *
 * Notes for Students:
 *  - `isalnum(int c)` returns non-zero if `c` is a letter or digit.
 *  - `isalpha(int c)` returns non-zero if `c` is a letter.
 *  - `isdigit(int c)` returns non-zero if `c` is a digit.
 *  - Input characters should be castable to unsigned char or EOF to safely use these functions.
 *  - The character '\t' (tab) is neither alphanumeric nor digit.
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
