/*
 * Filename    : files/file_read_basic.c
 * Description : Opens a file named "test.txt" in read mode and prints its contents character by character.
 *               Demonstrates basic file I/O in C using `fopen`, `fgetc`, and `feof`.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * (Contents of test.txt)
 * Hello, World!
 *
 * Sample Output:
 * Hello, World!
 */

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("File can't be opened\n");
        return 1; // Exit with error code
    }

    while (!feof(fp)) {
        ch = fgetc(fp);

        if (ch == EOF)
            break;

        printf("%c", ch);
    }

    fclose(fp); // Always close the file after use
    return 0;
}
