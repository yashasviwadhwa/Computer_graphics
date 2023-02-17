
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void dda(int x0,int y0,int x1,int y1)
{
float x,y,dx,dy,steps;
int i;

     dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx>=dy)
	   {
	steps = dx;
    }
    else
	   {
	steps = dy;
    }
    dx = dx/steps;
    dy = dy/steps;
    x = x0;
    y = y0;
    i = 1;
    while(i<= steps)
    {
	putpixel(x, y, RED);
	x += dx;
	y += dy;
//       printf("%.2f:%.2f\t",x,y);
	     // outtextxy(200+x,200+y,arr);
	i=i+1;
    }
}
void main()
{
    int gd =DETECT ,gm, i;
    float x, y,dx,dy,steps;
    int x0, x1, y0, y1;
    char arr[30];
    initgraph(&gd, &gm, "C:\\turboc3\\BGI");
//    setbkcolor(WHITE);
    x0 = 0 , y0 = 0, x1 = getmaxx(), y1 = 0;
    int height=35,width,lines=8;
  for(i=0;i<lines;i++)
 {
       dda(x0,y0,x1,y1);
       y0=y0+height;
       y1=y1+height;
 }

       dda(0,0,0,getmaxy());

//       dda(
   /* dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx>=dy)
	   {
	steps = dx;
    }
    else
	   {
	steps = dy;
    }
    dx = dx/steps;
    dy = dy/steps;
    x = x0;
    y = y0;
    i = 1;
    while(i<= steps)
    {
	putpixel(x, y, RED);
	x += dx;
	y += dy;
//       printf("%.2f:%.2f\t",x,y);
	     // outtextxy(200+x,200+y,arr);
	i=i+1;
    }*/
    getch();
																																						    closegraph();
}