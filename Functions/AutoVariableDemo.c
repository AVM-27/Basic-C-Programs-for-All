/*
 * Filename    : Functions/AutoVariableDemo.c
 * Description : Demonstrates use of 'auto' keyword in C (redundant, as all local variables are auto by default).
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 */

#include <stdio.h>

int sum_range(int lo, int hi) {
    auto int i;            // auto is implicit; unnecessary
    auto int sum = 0;

    for(i = lo; i < hi; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int lo, high;

    printf("Enter lower and upper bounds:\n");
    scanf("%d %d", &lo, &high);

    int sum = sum_range(lo, high);
    printf("The sum from %d to %d (exclusive) is: %d\n", lo, high, sum);

    return 0;
}
