/*
 * Filename    : Structs/student_marks.c
 * Description : Stores and displays student details including marks in 5 subjects.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * Enter information about student 1
 * Roll Number:
 * 101
 * Name:
 * Alice
 * Enter marks for 5 subjects:
 * 85 90 78 88 92
 *
 * Sample Output:
 * Student 1 Details:
 * Roll Number: 101
 * Name: Alice
 * Marks: 85.00 90.00 78.00 88.00 92.00
 */

#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[20];
    float marks[5];
};

int main() {
    struct student s[3];
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("\nEnter information about student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Enter marks for 5 subjects:\n");
        for (j = 0; j < 5; j++) {
            scanf("%f", &s[i].marks[j]);
        }
    }

    // Display the stored information
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d Details:\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: ");
        for (j = 0; j < 5; j++) {
            printf("%.2f ", s[i].marks[j]);
        }
        printf("\n");
    }

    return 0;
}
