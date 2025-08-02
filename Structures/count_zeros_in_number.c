/*
 * Filename    : math/count_zeros_in_number.c
 * Description : Counts the number of zero digits in a given integer.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Sample Input:
 * 105020
 *
 * Sample Output:
 * Number of zeros: 3
 */

#include <stdio.h>

int countZeros(int n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 0) {
            count++;
        }
        n = n / 10;
    }
    return count;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int zeroCount = countZeros(n);
    printf("Number of zeros: %d\n", zeroCount);
    return 0;
}
