

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
    {
int gd=DETECT,gm;
int x,y;
int font,direction,font_size;
int i;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

x=20;
y=400;

font=8; direction=0;
 font_size=2;
settextstyle(font,direction,font_size);
outtextxy(x,y,"05921402020");
outtextxy(x+200,y,"YASHASVI WADHWA");

printf("%d:%d",getmaxx(),getmaxy());
outtextxy(250,50,"639:");
outtextxy(300,50,"479");
for(i=0;i<getmaxx();i++)
{
cleardevice();
rectangle(0,0,getmaxx(),getmaxy());
//setbkcolor(LIGHTGRAY);
  setcolor(CYAN);
line(10+i,350,150+i,350);
line(40+i,350,70+i,320);
Sline(70+i,320,130+i,320);
line(130+i,320,150+i,350);
line(10+i,350,10+i,370);
line(150+i,350,150+i,370);
circle(50+i,370,10);
circle(50+i,370,5);
circle(100+i,370,10);
circle(100+i,370,5);
line(10+i,370,40+i,370);
line(60+i,370,90+i,370);
line(110+i,370,150+i,370);
line(0,380,getmaxx(),380);
line(0,385,getmaxx(),385);
 delay(20);
     }
getch();
    }