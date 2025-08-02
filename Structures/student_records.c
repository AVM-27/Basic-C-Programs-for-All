/*
 * Filename    : Structs/student_records.c
 * Description : Stores and displays records of 3 students with roll number, name, and marks.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 */

#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct student record[3];
    int i;

    // Student 1
    record[0].roll = 1;
    strcpy(record[0].name, "Aakash");
    record[0].marks = 86.5;

    // Student 2
    record[1].roll = 2;
    strcpy(record[1].name, "Adarsh");
    record[1].marks = 56.5;

    // Student 3
    record[2].roll = 3;
    strcpy(record[2].name, "Bhavin");
    record[2].marks = 96.5;

    for (i = 0; i < 3; i++) {
        printf("Records of Student %d\n", i + 1);
        printf("Name          : %s\n", record[i].name);
        printf("Roll Number   : %d\n", record[i].roll);
        printf("Marks Obtained: %.2f%%\n\n", record[i].marks);
    }

    return 0;
}
