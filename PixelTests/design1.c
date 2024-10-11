/** Gh code reworked to draw on the SenseHat using the most recent library
* @file simplepixels.c
* compile by typing gcc simplepixels.c led2472g.c in a directory that has
led2472h.c/h
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
 //memset(fb, MAGENTA, 128); //MAGENTA seems to be light blue, not the same as fora pixel
 //memset(fb, 0, 128);
 //ShLightPixel(4,4,MAGENTA,fb); //MAGENTA color is correct, same as below
 //fb->pixel[4][4] = MAGENTA; //ShLightPixel() is unnecessary, remove in the future
 //Set a test pixel pattern

/*	for (int a = 0; a < 8; a++) {
	usleep(300000);
    fb->pixel[0][a]=BLUE;
    fb->pixel[1][a]=GREEN;
    fb->pixel[2][a]=RED;
    fb->pixel[3][a]=YELLOW;
    fb->pixel[4][a]=MAGENTA;
    fb->pixel[5][a]=CYAN;
    fb->pixel[6][a]=WHITE;
*/
	for (int a = 0; a < 8; a++) {
usleep (100000);
 fb->pixel[0][0]=YELLOW;
 fb->pixel[0][1]=YELLOW;
 fb->pixel[0][2]=YELLOW;
 fb->pixel[0][3]=YELLOW;
 fb->pixel[0][4]=YELLOW;
 fb->pixel[0][5]=YELLOW;
 fb->pixel[0][6]=YELLOW;
 fb->pixel[0][7]=YELLOW;
usleep (100000);

usleep (100000);
 fb->pixel[1][0]=YELLOW;
 fb->pixel[1][1]=YELLOW;
 fb->pixel[1][2]=BLUE;
 fb->pixel[1][3]=BLUE;
 fb->pixel[1][4]=YELLOW;
 fb->pixel[1][5]=RED;
 fb->pixel[1][6]=YELLOW;
 fb->pixel[1][7]=YELLOW;
usleep (100000);

usleep (100000);
 fb->pixel[2][0]=YELLOW;
 fb->pixel[2][1]=YELLOW;
 fb->pixel[2][2]=BLUE;
 fb->pixel[2][3]=BLUE;
 fb->pixel[2][4]=YELLOW;
 fb->pixel[2][5]=YELLOW;
 fb->pixel[2][6]=RED;
 fb->pixel[2][7]=YELLOW;
usleep (100000);

usleep (100000);
 fb->pixel[3][0]=YELLOW;
 fb->pixel[3][1]=YELLOW;
 fb->pixel[3][2]=YELLOW;
 fb->pixel[3][3]=YELLOW;
 fb->pixel[3][4]=YELLOW;
 fb->pixel[3][5]=YELLOW;
 fb->pixel[3][6]=RED;
 fb->pixel[3][7]=YELLOW;
usleep (100000);

usleep (100000);
 fb->pixel[4][0]=YELLOW;
 fb->pixel[4][1]=YELLOW;
 fb->pixel[4][2]=YELLOW;
 fb->pixel[4][3]=YELLOW;
 fb->pixel[4][4]=YELLOW;
 fb->pixel[4][5]=YELLOW;
 fb->pixel[4][6]=RED;
 fb->pixel[4][7]=YELLOW;
usleep(100000);

usleep (100000);
 fb->pixel[5][0]=YELLOW;
 fb->pixel[5][1]=YELLOW;
 fb->pixel[5][2]=BLUE;
 fb->pixel[5][3]=BLUE;
 fb->pixel[5][4]=YELLOW;
 fb->pixel[5][5]=YELLOW;
 fb->pixel[5][6]=RED;
 fb->pixel[5][7]=YELLOW;
usleep(100000);

usleep (100000);
 fb->pixel[6][0]=YELLOW;
 fb->pixel[6][1]=YELLOW;
 fb->pixel[6][2]=BLUE;
 fb->pixel[6][3]=BLUE;
 fb->pixel[6][4]=YELLOW;
 fb->pixel[6][5]=RED;
 fb->pixel[6][6]=YELLOW;
 fb->pixel[6][7]=YELLOW;
usleep (100000);

usleep (100000);
 fb->pixel[7][0]=YELLOW;
 fb->pixel[7][1]=YELLOW;
 fb->pixel[7][2]=YELLOW;
 fb->pixel[7][3]=YELLOW;
 fb->pixel[7][4]=YELLOW;
 fb->pixel[7][5]=YELLOW;
 fb->pixel[7][6]=YELLOW;
 fb->pixel[7][7]=YELLOW;
 usleep (100000); // to allow pixels to be set

usleep (100000);
 fb->pixel[7][0]=GREEN;
 fb->pixel[7][1]=GREEN;
 fb->pixel[7][2]=GREEN;
 fb->pixel[7][3]=GREEN;
 fb->pixel[7][4]=GREEN;
 fb->pixel[7][5]=GREEN;
 fb->pixel[7][6]=GREEN;
 fb->pixel[7][7]=GREEN;
usleep(100000);

usleep(100000);
 fb->pixel[6][0]=GREEN;
 fb->pixel[6][1]=WHITE;
 fb->pixel[6][2]=WHITE;
 fb->pixel[6][3]=GREEN;
 fb->pixel[6][4]=GREEN;
 fb->pixel[6][5]=GREEN;
 fb->pixel[6][6]=GREEN;
 fb->pixel[6][7]=GREEN;
usleep(100000);

usleep(100000);
 fb->pixel[5][0]=GREEN;
 fb->pixel[5][1]=WHITE;
 fb->pixel[5][2]=WHITE;
 fb->pixel[5][3]=GREEN;
 fb->pixel[5][4]=WHITE;
 fb->pixel[5][5]=WHITE;
 fb->pixel[5][6]=WHITE;
 fb->pixel[5][7]=WHITE;
usleep(100000);

usleep(100000);
 fb->pixel[4][0]=GREEN;
 fb->pixel[4][1]=GREEN;
 fb->pixel[4][2]=GREEN;
 fb->pixel[4][3]=GREEN;
 fb->pixel[4][4]=WHITE;
 fb->pixel[4][5]=WHITE;
 fb->pixel[4][6]=WHITE;
 fb->pixel[4][7]=GREEN;
usleep(100000);

usleep(100000);
 fb->pixel[3][0]=GREEN;
 fb->pixel[3][1]=GREEN;
 fb->pixel[3][2]=GREEN;
 fb->pixel[3][3]=GREEN;
 fb->pixel[3][4]=WHITE;
 fb->pixel[3][5]=WHITE;
 fb->pixel[3][6]=WHITE;
 fb->pixel[3][7]=GREEN;
usleep(100000);

usleep(100000);
 fb->pixel[2][0]=GREEN;
 fb->pixel[2][1]=MAGENTA;
 fb->pixel[2][2]=MAGENTA;
 fb->pixel[2][3]=GREEN;
 fb->pixel[2][4]=WHITE;
 fb->pixel[2][5]=WHITE;
 fb->pixel[2][6]=WHITE;
 fb->pixel[2][7]=WHITE;
usleep(100000);

usleep(100000);
 fb->pixel[1][0]=GREEN;
 fb->pixel[1][1]=MAGENTA;
 fb->pixel[1][2]=MAGENTA;
 fb->pixel[1][3]=GREEN;
 fb->pixel[1][4]=GREEN;
 fb->pixel[1][5]=GREEN;
 fb->pixel[1][6]=GREEN;
 fb->pixel[1][7]=GREEN;
usleep(100000);

usleep(100000);
 fb->pixel[0][0]=GREEN;
 fb->pixel[0][1]=GREEN;
 fb->pixel[0][2]=GREEN;
 fb->pixel[0][3]=GREEN;
 fb->pixel[0][4]=GREEN;
 fb->pixel[0][5]=GREEN;
 fb->pixel[0][6]=GREEN;
 fb->pixel[0][7]=GREEN;
 usleep (100000); // to allow pixels to be set
}



return EXIT_SUCCESS;
}
