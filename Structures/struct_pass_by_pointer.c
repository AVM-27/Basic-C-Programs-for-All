/*
 * Filename    : Structures/struct_pass_by_pointer.c
 * Description : Demonstrates passing a struct by pointer to a function.
 *               Prints the student details using pointer dereferencing.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 */

#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    float percentage;
};

void func(struct student *record);

int main() {
    struct student record;
    record.id = 1;
    strcpy(record.name, "Raju");
    record.percentage = 86.5;
    func(&record);

    return 0;
}

void func(struct student *record) {
    printf("ID of student is \t%d \n", record->id);
    printf("Name of student is \t%s\n", record->name);
    printf("Percentage marks obtained are \t%.2f\n", record->percentage);
}
