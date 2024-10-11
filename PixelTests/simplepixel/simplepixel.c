/** Gh code reworked to draw on the SenseHat using the most recent library
 * @file simplepixels.c
 * compile by typing gcc simplepixels.c led2472g.c in a directory that has led2472h.c/h
 * run by typing ./a.out
 * quit by holding down Ctrl and typing a c
 */
#include "led2472g.h"

/** Demonstration of Astro Pi Sense Hat.
 * @version ceng153, Serial: 1a2b3c4d
 * @author Raspberry Pi Foundation
 * @author Leon King
 * @author Kristian Medri
 * @since 2024-02-15
 * @param void
 * @return exit status
 */
int main(void) 
{
    // Output 
    fprintf(stdout,"Unit: %LX\n",ShGetSerial());
    struct fb_t *fb;
    fb=ShInit(fb);

    //ShWipeScreen(0,fb); //same as below
    memset(fb, 0, 128); //ShWipeScreen() is unnecessary, remove in the future

    //memset(fb, MAGENTA, 128); //MAGENTA seems to be light blue, not the same as for a pixel
    //memset(fb, 0, 128);

    //ShLightPixel(4,4,MAGENTA,fb); //MAGENTA color is correct, same as below
    //fb->pixel[4][4] = MAGENTA; //ShLightPixel() is unnecessary, remove in the future

    usleep (300000);

    int animationSteps = 24;
    for (int step = 0; step < animationSteps; step++)
    {
    //Set a test pixel pattern
    fb->pixel[0][step % 8]=BLUE;
    fb->pixel[1][step % 8]=GREEN;
    fb->pixel[2][step % 8]=RED;
    fb->pixel[3][step % 8]=YELLOW;
    fb->pixel[4][step % 8]=MAGENTA;
    fb->pixel[5][step % 8]=CYAN;
    fb->pixel[6][step % 8]=WHITE;

    usleep (200000); // to allow pixels to be set
    }
    return EXIT_SUCCESS;
}
