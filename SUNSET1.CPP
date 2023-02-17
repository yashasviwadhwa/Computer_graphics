#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
line(0,100,640,100);
line(0,0,200,100);
line(200,100,400,0);
line(400,0,600,100);
line(600,100,800,0);
getch();
}