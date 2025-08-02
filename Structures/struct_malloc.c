/*
 * Filename    : Structures/struct_malloc.c
 * Description : Demonstrates dynamic memory allocation for a structure using malloc.
 *               Takes a book name as input and prints it using a structure pointer.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * CProgrammingBook
 *
 * Sample Output:
 * Name= CProgrammingBook
 */

#include <stdio.h>
#include <stdlib.h>

// Define structure 'book' with a name field
struct book {
    char name[20];
};

int main() {
    struct book *bptr;

    // Dynamically allocate memory for one book structure
    bptr = (struct book *)malloc(sizeof(struct book));

    // Check if malloc was successful
    if (bptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit with error code
    }

    // Prompt and input book name
    printf("Enter book name: ");
    scanf("%19s", bptr->name);  // Limits input to avoid buffer overflow

    // Output the book name
    printf("Name= %s\n", bptr->name);

    // Free allocated memory
    free(bptr);

    return 0;
}
