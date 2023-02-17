// C++ implementation for
// settextstyle() function
#include <graphics.h>

// driver code
int main()
{
	// gm is Graphics mode which is
	// a computer display mode that
	// generates image using pixels.
	// DETECT is a macro defined in
	// "graphics.h" header file
	int gd = DETECT, gm;

				int i,x,y,font,direction,font_size;
	// initgraph initializes the
	// graphics system by loading
	// a graphics driver from disk
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");

		    for( i=0;i<200;i++)
		    {
	// location of text
	cleardevice();
	x = 0;
	 y = 350;

	// font style
 font = 8;

	// font direction
 direction = 0;

	// font size
   font_size = 5;

	// for setting text style
	settextstyle(8,0,5);

	// for printing text in graphics window
	outtextxy(x+i, y, "05921402020");


		     } 	getch();
	// closegraph function closes the
	// graphics mode and deallocates
	// all memory allocated by graphics
	// system .
	closegraph();

	return 0;
}
