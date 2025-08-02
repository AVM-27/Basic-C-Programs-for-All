/*
 * Filename    : Strings/HeterogramCheck.c
 * Description : Checks whether a given string is a heterogram (no repeated characters).
 * Author      : Adarsh Venugopal
 *
 * A heterogram is a word or sentence in which no letter occurs more than once.
 *
 * ---------------------------
 * Sample Input/Output:
 * ---------------------------
 * Enter the size of your array:
 * 6
 * Enter the elements of your array:
 * planet
 * Output: IT IS A HETEROGRAM
 *
 * Enter the elements of your array:
 * apple
 * Output: IT IS NOT A HETEROGRAM
 */

#include <stdio.h>
#include <string.h>

int main() {
    int i, j, duplicateCount = 0;
    int size;

    printf("Enter the size of your string:\n");
    scanf("%d", &size);

    char arr[size];
    printf("Enter the elements of your array (string):\n");
    scanf("%s", arr);

    // Sorting the array to bring duplicate letters together
    for (i = 1; i < size; i++) {
        char key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // Checking for duplicate characters
    for (i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            duplicateCount++;
            break;
        }
    }

    if (duplicateCount == 0) {
        printf("IT IS A HETEROGRAM\n");
    } else {
        printf("IT IS NOT A HETEROGRAM\n");
    }

    return 0;
}
