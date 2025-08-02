/*
 * Filename    : Files/copy_file_with_print.c
 * Description : Copies contents from "sample1.txt" to "sample2.txt" character by character 
 *               while printing them to the console.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input File (sample1.txt):
 * Hello, World!
 *
 * Sample Output:
 * Hello, World!
 */

#include <stdio.h>

int main() {
    FILE *fp, *fp1;
    char ch;

    fp = fopen("sample1.txt", "r");
    fp1 = fopen("sample2.txt", "w");

    if (fp == NULL || fp1 == NULL) {
        printf("File can't be opened\n");
        return 1;
    }

    while (1) {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        fputc(ch, fp1);
        printf("%c", ch);
    }

    fclose(fp);
    fclose(fp1);

    return 0;
}
