#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm,x1=100,x2=100,y1=100,y2=200,x3=200,y3= 100;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 cleardevice();
  rectangle(getmaxx(),getmaxy(),0,0);
 line(getmaxx()/2,0,getmaxx()/2,getmaxy());
 line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
  getch();
  line(x1,y1,x2,y2);
  line(x2,y2,x3,y3);
  line(x3,y3,x1,y1);
  getch();
   line(getmaxx()-x1,y1,getmaxx()-x2,y2);
  line(getmaxx()-x2,y2,getmaxx()-x3,y3);
  line(getmaxx()-x3,y3,getmaxx()-x1,y1);
  getch();
  line(x1,getmaxy()-y1,x2,getmaxy()-y2);
  line(x2,getmaxy()-y2,x3,getmaxy()-y3);
  line(x3,getmaxy()-y3,x1,getmaxy()-y1);
  getch();

}