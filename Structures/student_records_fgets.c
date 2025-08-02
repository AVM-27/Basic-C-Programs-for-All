/*
 * Filename    : Structures/student_records_fgets.c
 * Description : Reads and stores multiple student records using fgets for input.
 *               Demonstrates handling struct arrays and string input with fgets.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * How many student's records do you want to store and display?
 * 2
 * Enter the roll number of student 1
 * 101
 * Enter the name of student
 * Alice
 * Enter the CGPA of student
 * 8.5
 * Enter the roll number of student 2
 * 102
 * Enter the name of student
 * Bob
 * Enter the CGPA of student
 * 9.1
 *
 * Sample Output:
 * Enter the number of the student whose records you want to see
 * 1
 * The details of the students are as follows
 * STUDENT 1
 * ROLL NO: 101
 * NAME: Alice
 * CGPA: 8.50
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct student {
    int roll;
    char name[50];
    float cgpa;
};

void deets(int size, struct student record[]);
void print(struct student record[], int choice);

int main() {
    int size, choice;
    printf("How many student's records do you want to store and display?\n");
    scanf("%d", &size);
    struct student record[size];
    deets(size, record);
    printf("Enter the number of the student whose records you want to see\n");
    scanf("%d", &choice);
    print(record, choice);
    return 0;
}

void deets(int size, struct student record[]) {
    char buffer[100]; // Buffer for reading student name
    for (int i = 0; i < size; i++) {
        printf("Enter the roll number of student %d\n", i + 1);
        scanf("%d", &record[i].roll);

        printf("Enter the name of student\n");
        getchar(); // Clear the newline character from previous input
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0'; // Remove trailing newline
        strncpy(record[i].name, buffer, sizeof(record[i].name) - 1);

        printf("Enter the CGPA of student\n");
        scanf("%f", &record[i].cgpa);
    }
}

void print(struct student record[], int choice) {
    printf("The details of the students are as follows\n");
    printf("STUDENT %d\n", choice);
    printf("ROLL NO: %d\n", record[choice - 1].roll);
    printf("NAME: %s\n", record[choice - 1].name);
    printf("CGPA: %.2f\n", record[choice - 1].cgpa);
    printf("\n\n");
}
