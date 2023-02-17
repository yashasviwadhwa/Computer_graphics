
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
//clrscr();

rectangle(0,0,getmaxx(),getmaxy());
printf("%d:%d",getmaxx(),getmaxy());

rectangle(25,25,590,400);
line(75,100,150,50);//bending line First
line(150,50,200,100);//bending line another
line(75,100,200,100);//sleeping line
line(150,50,400,50);
line(400,50,450,100);//this line
line(200,100,450,100);
line(75,100,75,300);
line(200,100,200,300);
line(75,300,200,300);
line(450,100,450,300);
line(200,300,450,300);
circle(300,200,55);
getch();









}