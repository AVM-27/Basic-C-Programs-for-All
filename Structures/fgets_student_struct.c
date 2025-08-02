/*
 * Filename    : Structures/fgets_student_struct.c
 * Description : Reads and displays records of students using structures and `fgets` for safe string input.
 *               It allows the user to input multiple student records and retrieve one by index.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * How many student's records do you want to store and display?
 * 2
 * Enter the roll number of student 1
 * 101
 * Enter the name of student
 * Alice Wonder
 * Enter the CGPA of student
 * 9.5
 * Enter the roll number of student 2
 * 102
 * Enter the name of student
 * Bob Builder
 * Enter the CGPA of student
 * 8.8
 * Enter the number of the student whose records you want to see
 * 1
 *
 * Sample Output:
 * The details of the students are as follows
 * STUDENT 1
 * ROLL NO: 101
 * NAME: Alice Wonder
 * CGPA: 9.50
 */

#include <stdio.h>
#include <string.h>

// Define a structure to hold student data.
struct student {
    int roll;           // Student roll number
    char name[50];      // Student name
    float cgpa;         // Student CGPA
};

// Function declarations
void input_details(int size, struct student record[]);
void print_details(struct student record[], int choice);

int main() {
    int size, choice;

    // Ask the user how many students to enter
    printf("How many student's records do you want to store and display?\n");
    scanf("%d", &size);

    // Declare an array of 'student' structs
    struct student record[size];

    // Populate the array with student information
    input_details(size, record);

    // Ask which student's details to display
    printf("Enter the number of the student whose records you want to see\n");
    scanf("%d", &choice);

    // Print the selected student's details
    print_details(record, choice);

    return 0;
}

// Function to collect student details from user input
void input_details(int size, struct student record[]) {
    char buffer[100];  // Temporary buffer to safely read string input

    for (int i = 0; i < size; i++) {
        printf("Enter the roll number of student %d\n", i + 1);
        scanf("%d", &record[i].roll);  // Read integer value for roll number

        getchar(); // Clear newline character left by scanf

        printf("Enter the name of student\n");
        // Use fgets to safely read the full name (including spaces)
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';  // Remove the trailing newline character from fgets

        // Copy the buffer contents into the name field of the student struct
        strncpy(record[i].name, buffer, sizeof(record[i].name) - 1);
        record[i].name[sizeof(record[i].name) - 1] = '\0'; // Ensure null-termination

        printf("Enter the CGPA of student\n");
        scanf("%f", &record[i].cgpa);  // Read float value for CGPA
    }
}

// Function to print the details of a selected student
void print_details(struct student record[], int choice) {
    printf("The details of the students are as follows\n");

    // Print the details of the student chosen by user
    printf("STUDENT %d\n", choice);
    printf("ROLL NO: %d\n", record[choice - 1].roll);
    printf("NAME: %s\n", record[choice - 1].name);
    printf("CGPA: %.2f\n", record[choice - 1].cgpa);
    printf("\n\n");
}
