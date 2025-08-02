/*
 * Filename    : Strings/ReplaceCharacterAtPosition.c
 * Description : Replaces a character at a given position in a string.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 *
 * Sample Input:
 *  Enter your string
 *  hello
 *  Enter the position of the character you want to replace
 *  1
 *  Enter the character you want to replace with
 *  a
 *
 * Sample Output:
 *  Updated string: hallo
 */

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char replace;
    int pos;

    printf("Enter your string\n");
    scanf("%s", name);

    int n = strlen(name);

    printf("Enter the position of the character you want to replace\n");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the character you want to replace with\n");
    scanf(" %c", &replace);  // Notice the space before %c to consume any newline

    name[pos] = replace;

    printf("Updated string: %s\n", name);

    return 0;
}
