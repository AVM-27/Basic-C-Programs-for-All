/*
 * Filename    : Files/write_read_integer.c
 * Description : Demonstrates basic file I/O in C. Writes an integer to a file using fprintf,
 *               then reads it back using fscanf.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * 10
 */

#include <stdio.h>

int main() {
    FILE *fp, *fp1;
    int a = 10, b;

    // Write integer to file
    fp = fopen("sample3.txt", "w");
    fprintf(fp, "%d", a);
    fclose(fp);

    // Read integer from file
    fp1 = fopen("sample3.txt", "r");
    fscanf(fp1, "%d", &b);
    printf("%d", b);
    fclose(fp1);

    return 0;
}
