/*
 * Filename    : files/read_student_data.c
 * Description : Reads structured student data (name, age, marks) from a file and prints it line by line.
 *               Demonstrates use of fscanf() with file I/O in C.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample File Input (data.txt):
 * Alice 20 85
 * Bob 19 90
 * Carol 21 88
 *
 * Sample Output:
 * name Alice age 20 mark 85
 * name Bob age 19 mark 90
 * name Carol age 21 mark 88
 */

#include <stdio.h>

int main() {
    FILE *fp;
    char name[10];
    int age, mark;

    fp = fopen("C:\\Users\\Adarsh Venugopal\\Desktop\\SEM 2\\COMPUTER PROGRAMMING\\CLASS CODES\\data.txt", "r");

    if (fp == NULL) {
        printf("File can't be opened\n");
        return 1;
    }

    while (fscanf(fp, "%s %d %d", name, &age, &mark) != EOF) {
        printf("name %s age %d mark %d\n", name, age, mark);
    }

    fclose(fp);
    return 0;
}
