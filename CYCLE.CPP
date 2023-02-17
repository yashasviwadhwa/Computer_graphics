#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
rectangle(0,10,getmaxx(),getmaxy());

line(2,400,getmaxx(),400);
printf("%d:%d",getmaxx(),getmaxy());
line(2,405,getmaxx(),405);
circle(50,360,35);
circle(150,360,35);
line(50,360,150,360);
line(50,360,100,320);
line(100,360,120,330);
//line();
getch();



}

