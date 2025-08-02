/*
 * Filename    : Strings/AlphabeticalSort.c
 * Description : Sorts characters of a 1D char array (string) alphabetically.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 */

#include <stdio.h>
#include <string.h>

void alphaseq(char name[]);

int main()
{
    char name[100];
    printf("Enter your name (without spaces): ");
    scanf("%s", name);

    alphaseq(name);

    printf("Sorted characters in string: %s\n", name);

    return 0;
}

void alphaseq(char name[])
{
    int i, j;
    char temp;
    int len = strlen(name);

    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (name[i] > name[j]) {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }
}
