#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi\\");
//line(x1,y1,x2,y2);
line(-50,100,getmaxx(),100);
line(0,100,100,0);
line(100,0,180,100);
line(180,100,290,0);
line(290,0,390,100);//this will help in forming The arc
line(390,100,490,0);
line(490,0,590,100);
arc(150,30,0,50,55);
getch();
}