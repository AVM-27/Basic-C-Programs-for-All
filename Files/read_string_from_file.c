/*
 * Filename    : Files/read_string_from_file.c
 * Description : Reads a single word (string without spaces) from a file using fscanf.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input File (sample4.txt):
 * HelloWorld
 *
 * Sample Output:
 * HelloWorld
 */

#include <stdio.h>

int main() {
    FILE *fp;
    char str[10];

    // Open the file for reading
    fp = fopen("sample4.txt", "r");

    // Read a string from the file and print it
    fscanf(fp, "%s", str);
    printf("%s", str);

    // Close the file
    fclose(fp);

    return 0;
}
