#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>

int main() {
    int gd = DETECT, gm;
    int i, x, y;
    initgraph(&gd, &gm, "C:\\turboc3\\BGI");


 while (!kbhit()) {
      /* color 500 random pixels on screen */
   for(i=0; i<=500; i++) {
//     setfillstyle(WIDE_DOT_FILL);
       circle(200,250,39);
  //     floodfill(200,250,39);
       x=rand()%getmaxx();

	  y=rand()%getmaxy();
	  putpixel(x,y,15);
	  setcolor(CYAN);
	  outtextxy(400,450,"05921402020");
	  outtextxy(500,450,"Yashasvi Wadhwa");

      delay(50);
      }
      /* clears screen */
      cleardevice();
    }

    getch();
    closegraph();
    return 0;
}