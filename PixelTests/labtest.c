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
 * @author Rohan Trikha
 * @since 2024-02-22
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

    //Set a test pixel pattern
    fb->pixel[2][1]=WHITE;
    fb->pixel[2][2]=WHITE;
    fb->pixel[2][3]=WHITE;
    fb->pixel[2][6]=WHITE;

    fb->pixel[3][1]=WHITE;
    fb->pixel[3][3]=WHITE;
    fb->pixel[3][5]=WHITE;

    fb->pixel[4][1]=WHITE;
    fb->pixel[4][3]=WHITE;
    fb->pixel[4][4]=WHITE;

    fb->pixel[5][1]=WHITE;
    fb->pixel[5][2]=WHITE;
    fb->pixel[5][3]=WHITE;
    fb->pixel[5][4]=WHITE;
    fb->pixel[5][5]=WHITE;
    fb->pixel[5][6]=WHITE;

    usleep (300000); // to allow pixels to be set

    return EXIT_SUCCESS;
}
