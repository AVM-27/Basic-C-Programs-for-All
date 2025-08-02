/*
 * Filename    : Structures/struct_dynamic_allocation.c
 * Description : Demonstrates dynamic memory allocation for a struct using malloc.
 *               Reads and prints the name stored in the allocated struct.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 */

#include <stdio.h>
#include <stdlib.h>

struct book {
    char name[20];
};

int main() {
    struct book *bptr;
    bptr = (struct book*)malloc(sizeof(struct book));  // Allocate memory dynamically
    if (bptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the book name: ");
    scanf("%19s", bptr->name);  // Limit input to avoid overflow
    printf("Name = %s\n", bptr->name);
    free(bptr); // Free allocated memory
    return 0;
}
