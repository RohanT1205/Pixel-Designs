#include "led2472g.h"

int main(void) {
    fprintf(stdout, "Unit: %LX\n", ShGetSerial());
    struct fb_t *fb;
    fb = ShInit(fb);

    // Wipe the screen
    memset(fb, 0, 128);

    for (;;) {
        // Set a test pixel pattern - Smiley face
        for (int b = 0; b < 8; b++) {
            usleep(500000);
            fb->pixel[0][b] = YELLOW;
            fb->pixel[1][b] = YELLOW;
            fb->pixel[2][b] = YELLOW;
            fb->pixel[3][b] = YELLOW;
            fb->pixel[4][b] = YELLOW;
            fb->pixel[5][b] = YELLOW;
            fb->pixel[6][b] = YELLOW;
            fb->pixel[7][b] = YELLOW;
            usleep(900000);
        }

        // Stop the blue eyes at their specific pixels
        for (int c = 1; c < 3; c++) {
            usleep(100000);
            fb->pixel[1][c] = BLUE;
        }
	for (int c = 1; c < 3; c++) {
	    usleep(100000);
	    fb->pixel[2][c] = BLUE;
	}
	for (int c = 1; c < 3; c++) {
	    usleep(100000);
	    fb->pixel[5][c] = BLUE;
	}
	for (int c = 1; c < 3; c++) {
	    usleep(100000);
	    fb->pixel[6][c] = BLUE;
	}
        // Stop the red smile at its specific pixels
	for (int d = 0; d < 6; d++) {
            usleep(100000);
            fb->pixel[1][d - 1] = YELLOW;;  // Clear previous position

            fb->pixel[1][d] = RED;
        for (int d = 0; d < 7; d++) {
            usleep(100000);
            fb->pixel[2][d-1] = YELLOW;;
	    fb->pixel[2][d] = RED;
        }
/*	for (int d = 0; d < 6; d++) {
	    usleep(300000);
	    fb->pixel[2][d] = RED;
	}
	for (int d = 0; d < 6; d++) {
            usleep(300000);
            fb->pixel[3][d] = RED;
        }
	for (int d = 0; d < 6; d++) {
            usleep(300000);
            fb->pixel[4][d] = RED;
        }
	for (int d = 0; d < 6; d++) {
            usleep(300000);
            fb->pixel[5][d] = RED;
        }
	for (int d = 0; d < 5; d++) {
            usleep(300000);
            fb->pixel[6][d] = RED;
        }
*/
        // Pause for a moment before clearing the screen
        usleep(100000000);

        // Wipe the screen
        memset(fb, 0, 128);
    }
}
    return EXIT_FAILURE;
}
