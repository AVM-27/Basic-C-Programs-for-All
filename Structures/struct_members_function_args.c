/*
 * Filename    : Structures/struct_members_function_args.c
 * Description : Demonstrates passing structure members as arguments to a function.
 *               Prints student details passed individually.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 */

#include <stdio.h>
#include <string.h>

void display(int id, char name[], float percentage) {
    printf("ID of student is \t%d \n", id);
    printf("Name of student is \t%s\n", name);
    printf("Percentage marks obtained are \t%.2f\n", percentage);
}

int main() {
    struct student {
        int id;
        char name[50];
        float percentage;
    } record;

    record.id = 1;
    strcpy(record.name, "Raju");
    record.percentage = 86.5;

    display(record.id, record.name, record.percentage);

    return 0;
}
