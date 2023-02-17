#include<graphics.h>
int main(void)
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\BGI");

line(150,150,450,250);
 setfillstyle(SOLID_FILL,RED);
 rectangle(300,300,500,500);
 floodfill(202,202,15);
 //circle(150,150,100);
// arc(200,200,130,170,120);
// setcolor(RED);
 getch();
 closegraph();
 return 0;
 }

