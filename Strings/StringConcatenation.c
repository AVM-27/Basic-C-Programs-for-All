/*
 * Filename    : Strings/StringConcatenation.c
 * Description : Concatenates two strings using strncat() and displays the result.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Program Overview:
 *  - This program reads two strings from the user.
 *  - It uses the built-in `strncat()` function to join the second string to the first.
 *  - The number of characters concatenated is equal to the length of the longer input string.
 *
 * Input:
 *  - Two strings (no spaces).
 *
 * Output:
 *  - The resulting string after concatenation.
 *
 * Notes for Students:
 *  - `strncat(dest, src, n)` appends at most `n` characters from `src` to the end of `dest`.
 *  - Ensure `dest` has enough space to store the concatenated string.
 *  - This example uses fixed-size arrays, which work well for beginner practice.
 *
 * Sample Input/Output:
 *  Example 1:
 *    Enter your first string
 *    hello
 *    Enter your second string
 *    world
 *    The concatenated string is helloworld
 *
 *  Example 2:
 *    Enter your first string
 *    basic
 *    Enter your second string
 *    c
 *    The concatenated string is basicc
 */

#include <stdio.h>
#include <string.h>  // Use <string.h>, not <strings.
