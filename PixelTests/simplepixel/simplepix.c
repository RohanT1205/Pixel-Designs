#include "led2472g.h"

int main(void) 
{
    fprintf(stdout, "Unit: %LX\n", ShGetSerial());
    struct fb_t *fb;
    fb = ShInit(fb);

    int animationSteps = 45;

    int rainbowColors[] = {GREEN, RED, GREEN, RED, GREEN, RED, GREEN};

    for (int step = 0; step < animationSteps; ++step) {
        memset(fb, 0, 128);


        for (int row = 0; row < 8; ++row) {
            fb->pixel[row][(step + row) % 8] = rainbowColors[(step + row) % 7];
        }

        usleep(300000); // Pause for a short duration to create animation
    }

    return EXIT_SUCCESS;
}
