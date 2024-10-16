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
    for (;;) {
    usleep (200000);
    fb->pixel[0][0]=BLUE;
    fb->pixel[0][1]=BLUE;
    fb->pixel[0][2]=BLUE;
    fb->pixel[0][3]=BLUE;
    fb->pixel[0][4]=BLUE;
    fb->pixel[0][5]=BLUE;
    fb->pixel[0][6]=BLUE;
    fb->pixel[0][7]=BLUE;
    usleep (200000);
 
    usleep (200000);
    fb->pixel[1][0]=BLUE;
    fb->pixel[1][1]=YELLOW;
    fb->pixel[1][2]=YELLOW;
    fb->pixel[1][5]=YELLOW;
    fb->pixel[1][6]=YELLOW;
    fb->pixel[1][7]=BLUE;
    usleep (200000);
 
    usleep (200000);
    fb->pixel[2][0]=BLUE;
    fb->pixel[2][1]=YELLOW;
    fb->pixel[2][5]=YELLOW;
    fb->pixel[2][2]=YELLOW;
    fb->pixel[2][6]=YELLOW;
    fb->pixel[2][7]=BLUE;
    usleep (200000);

    usleep (200000);
    fb->pixel[3][0]=BLUE;
    fb->pixel[3][1]=YELLOW;
    fb->pixel[3][3]=RED;
    fb->pixel[3][4]=RED;
    fb->pixel[3][6]=YELLOW;
    fb->pixel[3][7]=BLUE;
    usleep (200000);

    usleep (200000);
    fb->pixel[4][0]=BLUE;
    fb->pixel[4][1]=YELLOW;
    fb->pixel[4][3]=RED;
    fb->pixel[4][4]=RED;
    fb->pixel[4][6]=YELLOW;
    fb->pixel[4][7]=BLUE;
    usleep (200000);

    usleep (200000);
    fb->pixel[5][0]=BLUE;
    fb->pixel[5][1]=YELLOW;
    fb->pixel[5][2]=YELLOW;
    fb->pixel[5][5]=YELLOW;
    fb->pixel[5][6]=YELLOW;
    fb->pixel[5][7]=BLUE;
    usleep (200000);

    usleep (200000);
    fb->pixel[6][0]=BLUE;
    fb->pixel[6][1]=YELLOW;
    fb->pixel[6][2]=YELLOW;
    fb->pixel[6][5]=YELLOW;
    fb->pixel[6][6]=YELLOW;
    fb->pixel[6][7]=BLUE;
    usleep (200000);

    usleep (200000);
    fb->pixel[7][0]=BLUE;
    fb->pixel[7][1]=BLUE;
    fb->pixel[7][2]=BLUE;
    fb->pixel[7][3]=BLUE;
    fb->pixel[7][4]=BLUE;
    fb->pixel[7][5]=BLUE;
    fb->pixel[7][6]=BLUE;
    fb->pixel[7][7]=BLUE;
    usleep (200000);

    usleep (200000);
    fb->pixel[4][2]=RED;
    usleep (100000);
    fb->pixel[3][2]=RED;
    usleep (100000);
    fb->pixel[2][2]=RED;
    usleep (100000);
    fb->pixel[2][3]=RED;
    usleep (100000);
    fb->pixel[2][4]=RED;
    usleep (100000);
    fb->pixel[2][5]=RED;
    usleep (100000);
    fb->pixel[3][5]=RED;
    usleep (100000);
    fb->pixel[4][5]=RED;
    usleep (100000);
    fb->pixel[5][5]=RED;
    usleep (100000);
    fb->pixel[5][4]=RED;
    usleep (100000);
    fb->pixel[5][3]=RED;
    usleep (100000);
    fb->pixel[5][2]=RED;
    usleep (100000);
    fb->pixel[5][1]=RED;
    usleep (100000);
    fb->pixel[4][1]=RED;
    usleep (100000);
    fb->pixel[3][1]=RED;
    usleep (100000);
    fb->pixel[2][1]=RED;
    usleep (100000);
    fb->pixel[1][1]=RED;
    usleep (100000);
    fb->pixel[1][2]=RED;
    usleep (100000);
    fb->pixel[1][3]=RED;
    usleep (100000);
    fb->pixel[1][4]=RED;
    usleep (100000);
    fb->pixel[1][5]=RED;
    usleep (100000);
    fb->pixel[1][6]=RED;
    usleep (100000);
    fb->pixel[2][6]=RED;
    usleep (100000);
    fb->pixel[3][6]=RED;
    usleep (100000);
    fb->pixel[4][6]=RED;
    usleep (100000);
    fb->pixel[5][6]=RED;
    usleep (100000);
    fb->pixel[6][6]=RED;
    usleep (100000);
    fb->pixel[6][5]=RED;
    usleep (100000);
    fb->pixel[6][4]=RED;
    usleep (100000);
    fb->pixel[6][3]=RED;
    usleep (100000);
    fb->pixel[6][2]=RED;
    usleep (100000);
    fb->pixel[6][1]=RED;
    usleep (100000);
    fb->pixel[6][0]=ORANGE;
    usleep (100000);
    fb->pixel[5][0]=ORANGE;
    usleep (100000);
    fb->pixel[4][0]=ORANGE;
    usleep (100000);
    fb->pixel[3][0]=ORANGE;
    usleep (100000);
    fb->pixel[2][0]=ORANGE;
    usleep (100000);
    fb->pixel[1][0]=ORANGE;
    usleep (100000);
    fb->pixel[0][0]=ORANGE;
    usleep (100000);
    fb->pixel[0][1]=ORANGE;
    usleep (100000);
    fb->pixel[0][2]=ORANGE;
    usleep (100000);
    fb->pixel[0][3]=ORANGE;
    usleep (100000);
    fb->pixel[0][4]=ORANGE;
    usleep (100000);
    fb->pixel[0][5]=ORANGE;
    usleep (100000);
    fb->pixel[0][6]=ORANGE;
    usleep (100000);
    fb->pixel[0][7]=ORANGE;
    usleep (100000);
    fb->pixel[1][7]=ORANGE;
    usleep (100000);
    fb->pixel[2][7]=ORANGE;
    usleep (100000);
    fb->pixel[3][7]=ORANGE;
    usleep (100000);
    fb->pixel[4][7]=ORANGE;
    usleep (100000);
    fb->pixel[5][7]=ORANGE;
    usleep (100000);
    fb->pixel[6][7]=ORANGE;
    usleep (100000);
    fb->pixel[7][7]=ORANGE;
    usleep (100000);
    fb->pixel[7][6]=ORANGE;
    usleep (100000);
    fb->pixel[7][5]=ORANGE;
    usleep (100000);
    fb->pixel[7][4]=ORANGE;
    usleep (100000);
    fb->pixel[7][3]=ORANGE;
    usleep (100000);
    fb->pixel[7][2]=ORANGE;
    usleep (100000);
    fb->pixel[7][1]=ORANGE;
    usleep (100000);
    fb->pixel[7][0]=ORANGE;
    usleep (100000);
    fb->pixel[6][1]=WHITE;
    usleep (100000);
    fb->pixel[5][2]=WHITE;
    usleep (100000);
    fb->pixel[4][3]=WHITE;
    usleep (100000);
    fb->pixel[3][4]=WHITE;
    usleep (100000);
    fb->pixel[2][5]=WHITE;
    usleep (100000);
    fb->pixel[1][6]=WHITE;
    usleep (100000);
    fb->pixel[6][6]=WHITE;
    usleep (100000);
    fb->pixel[5][5]=WHITE;
    usleep (100000);
    fb->pixel[4][4]=WHITE;
    usleep (100000);
    fb->pixel[3][3]=WHITE;
    usleep (100000);
    fb->pixel[2][2]=WHITE;
    usleep (100000);
    fb->pixel[1][1]=WHITE;
    usleep (100000);
    fb->pixel[4][5]=WHITE;
    usleep (100000);
    fb->pixel[3][5]=WHITE;
    usleep (100000);
    fb->pixel[2][5]=WHITE;
    usleep (100000);
    fb->pixel[2][4]=WHITE;
    usleep (100000);
    fb->pixel[2][3]=WHITE;
    usleep (100000);
    fb->pixel[2][2]=WHITE;
    usleep (100000);
    fb->pixel[3][2]=WHITE;
    usleep (100000);
    fb->pixel[4][2]=WHITE;
    usleep (100000);
    fb->pixel[5][2]=WHITE;
    usleep (100000);
    fb->pixel[5][3]=WHITE;
    usleep (100000);
    fb->pixel[5][4]=WHITE;
    usleep (100000);
    fb->pixel[5][5]=WHITE;
    usleep (100000);
    fb->pixel[5][6]=WHITE;
    usleep (100000);
    fb->pixel[4][6]=WHITE;
    usleep (100000);
    fb->pixel[3][6]=WHITE;
    usleep (100000);
    fb->pixel[2][6]=WHITE;
    usleep (100000);
    fb->pixel[1][6]=WHITE;
    usleep (100000);
    fb->pixel[1][5]=WHITE;
    usleep (100000);
    fb->pixel[1][4]=WHITE;
    usleep (100000);
    fb->pixel[1][3]=WHITE;
    usleep (100000);
    fb->pixel[1][2]=WHITE;
    usleep (100000);
    fb->pixel[1][1]=WHITE;
    usleep (100000);
    fb->pixel[2][1]=WHITE;
    usleep (100000);
    fb->pixel[3][1]=WHITE;
    usleep (100000);
    fb->pixel[4][1]=WHITE;
    usleep (100000);
    fb->pixel[5][1]=WHITE;
    usleep (100000);
    fb->pixel[6][1]=WHITE;
    usleep (100000);
    fb->pixel[6][2]=WHITE;
    usleep (100000);
    fb->pixel[6][3]=WHITE;
    usleep (100000);
    fb->pixel[6][4]=WHITE;
    usleep (10000);
    fb->pixel[6][5]=WHITE;
    usleep (100000);
    fb->pixel[6][6]=WHITE;
    usleep (100000);
    fb->pixel[6][7]=RED;
    usleep (100000);
    fb->pixel[5][7]=RED;
    usleep (100000);
    fb->pixel[4][7]=RED;
    usleep (100000);
    fb->pixel[3][7]=RED;
    usleep (100000);
    fb->pixel[2][7]=RED;
    usleep (100000);
    fb->pixel[1][7]=RED;
    usleep (100000);
    fb->pixel[0][7]=RED;
    usleep (100000);
    fb->pixel[0][6]=RED;
    usleep (100000);
    fb->pixel[0][5]=RED;
    usleep (100000);
    fb->pixel[0][4]=RED;
    usleep (100000);
    fb->pixel[0][3]=RED;
    usleep (100000);
    fb->pixel[0][2]=RED;
    usleep (100000);
    fb->pixel[0][1]=RED;
    usleep (100000);
    fb->pixel[0][0]=RED;
    usleep (100000);
    fb->pixel[1][0]=RED;
    usleep (100000);
    fb->pixel[2][0]=RED;
    usleep (100000);
    fb->pixel[3][0]=RED;
    usleep (100000);
    fb->pixel[4][0]=RED;
    usleep (100000);
    fb->pixel[5][0]=RED;
    usleep (100000);
    fb->pixel[6][0]=RED;
    usleep (100000);
    fb->pixel[7][0]=RED;
    usleep (100000);
    fb->pixel[7][1]=RED;
    usleep (100000);
    fb->pixel[7][2]=RED;
    usleep (100000);
    fb->pixel[7][3]=RED;
    usleep (100000);
    fb->pixel[7][4]=RED;
    usleep (100000);
    fb->pixel[7][5]=RED;
    usleep (100000);
    fb->pixel[7][6]=RED;
    usleep (100000);
    fb->pixel[7][7]=RED;
    usleep (100000);

 fb->pixel[2][1]=MAGENTA;
 fb->pixel[2][2]=MAGENTA;
 fb->pixel[2][3]=MAGENTA;
 fb->pixel[2][6]=MAGENTA;
 usleep (200000);

 usleep (200000);
 fb->pixel[3][1]=MAGENTA;
 fb->pixel[3][3]=MAGENTA;
 fb->pixel[3][5]=MAGENTA;
 usleep (200000);

 usleep (200000);
 fb->pixel[4][1]=MAGENTA;
 fb->pixel[4][3]=MAGENTA;
 fb->pixel[4][4]=MAGENTA;
 usleep (200000);

 usleep (200000);
 fb->pixel[5][1]=MAGENTA;
 fb->pixel[5][2]=MAGENTA;
 fb->pixel[5][3]=MAGENTA;
 fb->pixel[5][4]=MAGENTA;
 fb->pixel[5][5]=MAGENTA;
 fb->pixel[5][6]=MAGENTA;
 usleep (200000);
}
    return EXIT_SUCCESS;
}
