/*
 * Filename    : Strings/HeterogramCheck.c
 * Description : Checks if a given word is a heterogram (no repeating characters).
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * What is a Heterogram?
 *  - A heterogram is a word or phrase in which no letter occurs more than once.
 *
 * Functionality:
 *  - Accepts a string from the user (without spaces).
 *  - Sorts the string alphabetically using insertion sort.
 *  - Checks for repeated characters.
 *  - Prints whether it is a heterogram.
 *
 * Sample I/O:
 *  Enter a word:
 *  lamp
 *  IT IS A HETEROGRAM
 *
 *  Enter a word:
 *  apple
 *  IT IS NOT A HETEROGRAM
 */

#include <stdio.h>
#include <string.h>

int main() {
    char arr[100], key;
    int i, j, is_duplicate = 0;
    int num;

    printf("Enter the number of characters in your word: ");
    scanf("%d", &num);

    printf("Enter the word (no spaces): ");
    scanf("%s", arr);

    // Insertion sort to arrange characters
    for (i = 1; i < num; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // Check for duplicates in sorted array
    for (i = 0; i < num - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            is_duplicate = 1;
            break;
        }
    }

    if (is_duplicate == 0) {
        printf("IT IS A HETEROGRAM\n");
    } else {
        printf("IT IS NOT A HETEROGRAM\n");
    }

    return 0;
}
