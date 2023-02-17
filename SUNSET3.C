
#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi\\");
rectangle(0,0,getmaxx(),getmaxy());
line(0,150,getmaxx(),150);
line(0,390,getmaxx(),390);
line(0,150,120,0);
line(120,0,150,150);
line(150,150,290,0);
line(290,0,390,150);
line(390,150,500,0);
line(500,0,getmaxx(),150);
line(50,300,90,250);
line(90,250,120,300);
line(50,300,120,300);
line(90,250,210,250);
line(210,250,230,300);
line(120,300,230,300);
line(50,300,50,387);
line(120,300,120,387);
line(230,300,230,387);
line(50,387,230,387);
getch();



}