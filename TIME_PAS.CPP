#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void dda(int x1,int y1,int x2,int y2)
{
 int dx=x2-x1;
 int dy=y2-y1;
 double s,x,y;
 if(abs(dx)>abs(dy))
 s=abs(dx);
 else
 s=abs(dy);
 dx=dx/s;
 dy=dy/s;
 x=x1;
 y=y1;
 for(int i=0;i<s;i++)
 {
 putpixel(x,y,RED);
 x+=dx;
 y+=dy;

 }

 }


void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 cleardevice();
 dda(100,200,300,200);
getch();
}
