#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()

{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//cleardevice();
for(int i=0;i<500;i++)
{
circle(50+i,300,25);
circle(150+i,300,25);
line(50+i,300,150+i,300);
line(50+i,300,100+i,260);
line(150+i,300,100+i,260);
line(100+i,260,50+i,230);
line(30+i,230,50+i,230);
line(0,328,640,328);
getch();
delay(20);
cleardevice();
}
getch();
     }