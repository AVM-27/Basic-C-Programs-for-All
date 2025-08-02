/*
 * Filename    : Arrays/TwoDCharArrayDemo.c
 * Description : Demonstrates different ways to declare, initialize, and print 2D character arrays (arrays of strings) in C.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - Shows three different methods to declare and initialize 2D character arrays (array of strings).
 *  - Prints all elements from these arrays to illustrate how 2D char arrays work.
 *
 * Input:
 *  - No user input; uses predefined string arrays.
 *
 * Output:
 *  - Prints all strings stored in the arrays in tab-separated format.
 *
 * Important Notes for Students:
 *  - 2D char arrays can be used to store multiple strings.
 *  - Strings are arrays of characters ending with a null character '\0'.
 *  - Different syntaxes exist for initializing 2D char arrays, e.g., using string literals or character lists.
 *  - When printing characters, use '%c'; when printing strings, use '%s'.
 *  - The '\0' null character marks the end of a string.
 *
 * Sample Output:
 * Tree      Bowl      Hat      Mice      Toon
 * Tree      Bowl      Hat      Mice      Toon
 * tree      bowl
 */

#include <stdio.h>

int main()
{
    int i, j;

    // Method 1: Fixed size 2D char array initialized with string literals
    char name1[5][10] = {"Tree", "Bowl", "Hat", "Mice", "Toon"};

    // Method 2: 2D char array with size of first dimension inferred, second fixed
    char name2[][10] = {"Tree", "Bowl", "Hat", "Mice", "Toon"};

    // Method 3: 2D char array initialized using character arrays including null terminators
    char name3[][10] = {
        {'t', 'r', 'e', 'e', '\0'},
        {'b', 'o', 'w', 'l', '\0'}
    };

    // Print all strings from name1 using nested loops, printing character by character
    printf("Printing name1 array (character by character):\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10 && name1[i][j] != '\0'; j++)
        {
            printf("%c", name1[i][j]);
        }
        printf("\t");
    }
    printf("\n\n");

    // Print all strings from name2 using string format specifier
    printf("Printing name2 array (using %%s to print strings):\n");
    i = 0;
    while (i < 5) // We know the size is 5 here
    {
        printf("%s\t", name2[i]);
        i++;
    }
    printf("\n\n");

    // Print all strings from name3 using string format specifier
    printf("Printing name3 array (using %%s to print strings):\n");
    i = 0;
    while (i < 2) // name3 has only 2 strings
    {
        printf("%s\t", name3[i]);
        i++;
    }
    printf("\n");

    return 0;
}
