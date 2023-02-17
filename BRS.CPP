//#inlcude<stdio.h>
#include<conio.h>
#include<graphics.h>
void breshmanline(int x1,int y1,int x2,int y2)
{
 int dx, dy, p, x, y;
    dx=x2-x1;
    dy=y2-y1;
    x=x1;
    y=y1;
    p=2*dy-dx;
    while(x<x1)
    {
	if(p>=0)
	{
	    putpixel(x,y,7);
	    y=y+1;
	    p=p+2*dy-2*dx;
	}
	else
	{
	    putpixel(x,y,7);
	    p=p+2*dy;}
	    x=x+1;
	}
}

int main()
{
    int gdriver=DETECT, gmode, error;
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
    int x1=100,x2=100,y1=100,y2=200,x3=200,y3=100;
  //  cleardevice();
    breshmanline(x1,y1,x2,y2);
breshmanline(x2,y2,x3,y3);
breshmanline(x3,y3,x1,y1);
getch();

    return 0;
}
