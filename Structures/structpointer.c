/*
 * Filename    : Structures/structpointer.c
 * Description : Demonstrates the use of a pointer to a structure and dynamic memory allocation.
 *               Accepts a book name as input and displays it.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * DSAbook
 *
 * Sample Output:
 * Name = DSAbook
 */

#include <stdio.h>
#include <stdlib.h>

// Define a structure to represent a book
struct book {
    char name[20];
};

int main() {
    // Declare a pointer to struct book
    struct book *bptr;

    // Allocate memory dynamically for one book
    bptr = (struct book *)malloc(sizeof(struct book));

    // Check if memory allocation was successful
    if (bptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Prompt user to enter the book name
    printf("Enter book name: ");
    scanf("%19s", bptr->name); // Use width specifier to avoid buffer overflow

    // Print the book name
    printf("Name = %s\n", bptr->name);

    // Free allocated memory
    free(bptr);

    return 0;
}
