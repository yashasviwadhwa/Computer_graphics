#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>



void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\turboc3\\bgi");
 cleardevice();
 for(int i=0;i<getmaxx();i++)
 {
 rectangle(0,0,getmaxx(),getmaxy());
 circle(30+i,300,30);
 circle(140+i,300,30);
 line(30+i,300,140+i,300);
 line(140+i,300,100+i,270);
 line(30+i,300,100+i,270);
line(100+i,270,80+i,250);
line(80+i,250,60+i,250);
   line(0,335,getmaxx(),335);

   cleardevice();

  }
 getch();



}
