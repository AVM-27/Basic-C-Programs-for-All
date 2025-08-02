/*
 * Filename    : graphics/circle.c
 * Description : Basic graphics program using <graphics.h> to draw a circle
 *               at position (250, 200) with radius 50.
 * Author      : Adarsh Venugopal (https://github.com/AVM-27)
 * Date        : 2025-08-02
 *
 * Note        : Requires Turbo C or WinBGIm-compatible graphics environment.
 *
 * Sample Input:
 * (no input required)
 *
 * Sample Output:
 * (Draws a circle on a graphics screen)
 */

#include <graphics.h> // Graphics library (non-standard, Turbo C compatible)

int main() {
    int gd = DETECT, gm;

    // Initialize graphics driver and mode
    initgraph(&gd, &gm, "");

    // Draw a circle with center (250, 200) and radius 50
    circle(250, 200, 50);

    // Wait for user input
    getch();

    // Close graphics mode and free memory
    closegraph();

    return 0;
}
