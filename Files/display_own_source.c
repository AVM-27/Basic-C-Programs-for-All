/*
 * Filename    : Files/display_own_source.c
 * Description : Opens and reads its own source file (files4.c) and prints the content to stdout.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Note        : This program demonstrates how a file can read and print its own code.
 */

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open the source file in read mode
    fp = fopen("files4.c", "r");
    if (fp == NULL) {
        printf("Can't open the file\n");
        return 1;
    }

    // Read characters until end-of-file
    while (!feof(fp)) {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
