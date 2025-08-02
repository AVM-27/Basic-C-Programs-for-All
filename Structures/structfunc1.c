/*
 * Filename    : Structures/structfunc1.c
 * Description : Demonstrates passing structure members as parameters to a function and displaying them.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * ID of student is    1 
 * Name of student is  Raju
 * Percentage marks obtained are 86.500000
 */

#include <stdio.h>
#include <string.h>

// Function to display student details
void display(int id, char name[], float percentage) {
    printf("ID of student is \t%d \n", id);
    printf("Name of student is\t%s\n", name);
    printf("Percentage marks obtained are\t%f\n", percentage);
}

int main() {
    // Define a structure to hold student details
    struct student {
        int id;
        char name[50];
        float percentage;
    } record;

    // Assign values to the structure members
    record.id = 1;
    strcpy(record.name, "Raju");  // Copy the name string safely into the structure
    record.percentage = 86.5f;

    // Call the function and pass structure members as arguments
    display(record.id, record.name, record.percentage);

    return 0;  // Indicate successful execution
}
