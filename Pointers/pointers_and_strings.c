/*
 * Filename    : Pointers/pointers_and_strings.c
 * Description : 
 *   Demonstrates how a character pointer can be used to traverse
 *   a null-terminated string in C.
 *   Instead of using array indexing, pointer arithmetic is used
 *   to access each character until the end of the string.
 *
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

    // Traverse and print each character using the pointer
    for(i = 0; i < strlen(str); i++) {
        printf("%c", *p);  // Print current character
        p++;               // Move to next character
    }

    printf("\n");
    return 0;
}
