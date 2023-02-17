#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cleardevice();
int x0=50,x1=100,y0=100,y1=100;
line(x0,y0,x1,y1);
int sx,sy;
cin>>sx>>sy;
x0=x0*sx;
y0=y0*sy;
x1=x1*sx;
y1=y1*sy;
getch();
line(x0,y0,x1,y1);
getch();
closegraph();

		 }






