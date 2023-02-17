#include<graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main()
{
int gd=DETECT,gm,errorcode;
int get_x=getmaxx();
int get_y=getmaxy();
initgraph(&gd,&gm,"c:\\turboc3\\bgi\\");

errorcode=graphresult();
 if( errorcode != grOk)
    {
      printf("Graphics error: %s\n",grapherrormsg(errorcode));

      printf("Press any key to exit.");
      getch();
      exit(1);
    }
     setcolor(RED);
 circle(300,200,55);
 getch();
closegraph();

 return 0;
}
