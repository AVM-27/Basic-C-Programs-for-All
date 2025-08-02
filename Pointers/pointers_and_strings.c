/*
 * Filename    : Pointers/pointers_and_strings.c
 * Description : Demonstrates traversal of a string using a character pointer.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * Hello World
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";  // Define a string
    char *p = str;               // Pointer to the start of the string
    int i;

    // Traverse and print each character using pointer
    for(i = 0; i < strlen(str); i++) {
        printf("%c", *p);
        p++;
    }

    printf("\n");
    return 0;
}
