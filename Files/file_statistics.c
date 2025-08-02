/*
 * Filename    : Files/file_statistics.c
 * Description : Reads a text file and counts the number of characters, spaces,
 *               tabs, and lines.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input File: sample3.txt
 * (Example content)
 * Hello world
 * This is a sample	file.
 *
 * Sample Output:
 * Number of characters = 35
 * Number of blanks = 5
 * Number of tabs = 1
 * Number of lines = 2
 */

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int nol = 0, not = 0, nob = 0, noc = 0;

    fp = fopen("sample3.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        noc++;                // Count characters
        if (ch == ' ') nob++; // Count spaces
        if (ch == '\n') nol++; // Count lines
        if (ch == '\t') not++; // Count tabs
    }

    fclose(fp);

    printf("\nNumber of characters = %d", noc);
    printf("\nNumber of blanks = %d", nob);
    printf("\nNumber of tabs = %d", not);
    printf("\nNumber of lines = %d\n", nol);

    return 0;
}
