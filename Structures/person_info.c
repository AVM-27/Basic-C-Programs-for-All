/*
 * Filename    : structs/person_info.c
 * Description : Defines a struct for person details and prints data for two persons.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Output:
 * ADARSH
 * M
 * 19
 * CHEMBUR
 *
 * ARSHITHAA
 * F
 * 14
 * CHEMBUR
 */

#include <stdio.h>
#include <string.h>

struct person {
    char name[300];
    char gender;
    int age;
    char address[100];
};

int main() {
    struct person person1 = {"Adarsh", 'M', 19, "Chembur"};
    struct person person2 = {"Arshithaa", 'F', 14, "Chembur"};

    printf("Person 1 Details:\n");
    printf("Name    : %s\n", person1.name);
    printf("Gender  : %c\n", person1.gender);
    printf("Age     : %d\n", person1.age);
    printf("Address : %s\n\n", person1.address);

    printf("Person 2 Details:\n");
    printf("Name    : %s\n", person2.name);
    printf("Gender  : %c\n", person2.gender);
    printf("Age     : %d\n", person2.age);
    printf("Address : %s\n", person2.address);

    return 0;
}
