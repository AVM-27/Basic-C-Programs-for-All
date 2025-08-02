/*
 * Filename    : Functions/StaticVariableDemo.c
 * Description : Demonstrates difference between automatic and static variables.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 *
 * Sample Output:
 * main
 * 1 1 1 1 1 1 
 * function
 * 1 2 3 4 5 6
 */

#include <stdio.h>

void static_n();

int main() {
    int i;
    printf("main\n");
    for(i = 0; i <= 5; i++) {
        int n = 0; // automatic variable
        printf("%d ", ++n);
    }
    printf("\n");
    static_n(); // call to function using static variable
    return 0;
}

void static_n() {
    int i;
    printf("function\n");
    for (i = 0; i <= 5; ++i) {
        static int m = 0; // static variable retains value
        printf("%d ", ++m);
    }
}
