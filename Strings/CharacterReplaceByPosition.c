/*
 * Filename    : Strings/CharacterReplaceByPosition.c
 * Description : Replaces a character at a given position in a string.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Functionality:
 *  - Takes a string input.
 *  - Accepts a position (0-indexed) and a character to replace.
 *  - Replaces the character at the given position.
 *  - Displays the modified string.
 *
 * Sample Input:
 *  Enter your string
 *  example
 *  Enter the position of the character you want to replace
 *  2
 *  Enter the character you want to replace with
 *  z
 *
 * Sample Output:
 *  The updated string is: exzmple
 */

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char replace;
    int pos, i;

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
    scanf(" %c", &replace);  // note space before %c to consume leftover newline

    name[pos] = replace;

    printf("The updated string is: %s\n", name);

    return 0;
}
